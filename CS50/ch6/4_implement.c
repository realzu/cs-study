// 6-4 연결 리스트 : 코딩

typedef struct node
{
    int number; 
    struct node *next;  
}
node;

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // list라는 이름의 node 포인터를 정의합니다. 연결 리스트의 가장 첫 번째 node를 가리킬 것입니다. 
    // 이 포인터는 현재 아무 것도 가리키고 있지 않기 때문에 NULL 로 초기화합니다.
    node *list = NULL;

    // 새로운 node를 위해 메모리를 할당하고 포인터 *n으로 가리킵니다.
    node *n = malloc(sizeof(node)); //n은 노드의 주소!
    if (n != NULL)  //정상적인지 검사
    {
        // n의 number 필드에 2의 값을 저장합니다. “n->number”는 “(*n).number”와 동일한 의미입니다. (n은 노드가 아니라서 n.number를 쓸 수없음 (따라서 *n을 쓰는 것임))
        // 즉, n이 가리키는 node의 number 필드를 의미하는 것입니다. 
        // 간단하게 화살표 표시 ‘->’로 쓸 수 있습니다. n의 number의 값을 2로 저장합니다.
        n->number = 2; 

        // n 다음에 정의된 node가 없으므로 NULL로 초기화합니다.
        n->next = NULL;
    }

    // 이제 첫번째 node를 정의했기 떄문에 list 포인터를 n 포인터로 바꿔 줍니다.
    list = n;   //같은 값의 주소

    node *n = malloc(sizeof(node));
    if (n != NULL)  
    {
        n->number = 4; 
        n->next = NULL;
    }

    node *tmp = list;   //(2와 4를 연결해야하니) tmp 포인터를 list와 같은곳으로 가리키도록 

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    /*
    '메모리 누수'
    list가 2 -> 4 -> 5 를 가리키고 있는데
    갑자기 list와 2 사이에 '1'이 등장 -> list가 1을 가리킴 (1은 아무것도 가리키지x)
    그러면 2에 연결된게 없기 때문에 2->4->5 모두 버려짐(값을 잃음)

    so, list와 1이 동시에 2를 가리킨 다음 -> list가 1을 가리키면됌(1은 여전히 2를 가리키니)
    */
    n->next = list; //1을 가리키고 있는 새로운 node의 next필드를 list로 ★
    list = n
}


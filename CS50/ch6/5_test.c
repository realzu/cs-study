// 6-5 연결 리스트 : 시연

// Implements a list of numbers with linked list
#include <stdio.h>
#include <stdlib.h>

// Represents a node
typedef struct node
{
    int number; 
    struct node *next;
}
node;

int main(void)
{
    // List of size 0
    node *list = NULL;

    // Add number to list
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }

    n->number = 1;
    n->next = NULL; //구조체에 값들을 넣는 것
    list = n;   //새로운 node를 가리키는 것

    // Add number to list
    // 이제 list에 다른 node를 더 연결하기 위해 n에 새로운 메모리를 다시 할당합니다.
    n = malloc(sizeof(node));   //--아까와 다른 주소
    if (n == NULL)
    {
        return 1;
    }
    // n의 number와 next의 값을 각각 저장합니다.
    n->number = 2;
    n->next = NULL;
    // list가 가리키는 것은 첫 번째 node입니다. 
    //이 node의 다음 node를 n 포인터로 지정합니다.
    list->next = n;

    // 다시 한 번 n 포인터에 새로운 메모리를 할당하고 number과 next의 값을 저장합니다.
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 3;
    n->next = NULL;

    // 현재 list는 첫번째 node를 가리키고, 이는 두번째 node와 연결되어 있습니다. 
    // 따라서 세 번째 node를 더 연결하기 위해 첫 번째 node (list)의 
    // 다음 node(list->next)의 다음 node(list->next->next)를 n 포인터로 지정합니다.
    list->next->next = n;

    // 이제 list에 연결된 node를 처음부터 방문하면서 각 number 값을 출력합니다. 
    // 마지막 node의 next에는 NULL이 저장되어 있을 것이기 때문에 이 것이 for 루프의 종료 조건이 됩니다.
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }

    // Free list
    // 메모리를 해제해주기 위해 list에 연결된 node들을 처음부터 방문하면서 free 해줍니다.
    while (list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
}

/*
연결 리스트의 크기가 n 일때 그 실행 시간은 O(n)
배열의 경우 임의 접근이 가능하기 때문에 (정렬 되어 있는 경우) 이진 검색을 이용하면 O(log n)의 실행 시간
배열 > 연결. 연결이 더 불리

같은 크기를 가지는 배열과 리스트가 있습니다. 첫번째 값이 아닌 위치의 값에 접근하려고 할 때 소요되는 시간에 대한 설명으로 옳은 것은 무엇인가요? 배열이 리스트보다 더 빠르다
*/
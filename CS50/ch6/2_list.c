// 6-2 배열의 크기 조정하기
// : 일정한 크기의 배열이 주어졌을 때, 그 크기를 키우려면? 새로운공간에 큰 크기의 메모리 다시할당 후 기존의 배열값 옮겨줌
// O(n), 즉 배열의 크기 n만큼의 실행 시간이 소요

#include <stdio.h>
#include <stdlib.h> //malloc, free

int main(void)
{
    //int 자료형 3개로 이루어진 list 라는 포인터를 선언하고 메모리 할당
    int *list = malloc(3 * sizeof(int));    //12바이트

    // 포인터가 잘 선언되었는지 확인
    if (list == NULL)   //null이면 안된것
    {
        return 1;
    }

    // list 배열의 각 인덱스에 값 저장  --배열이라서 값저장가능(메모리덩어리를 배열처럼 사용?)
    list[0] = 1;
    list[1] = 2;    //2번째바이트가 아닌 4바이트 뒤
    list[2] = 3;    //8바이트 뒤  => []는 정확한 메모리 덩어리로 가서 정수3개를 알맞게넣게해줌

    //int 자료형 4개 크기의 tmp 라는 포인터를 선언하고 메모리 할당
    int *tmp = malloc(4 * sizeof(int));

    if (tmp == NULL)
    {
        return 1;
    }

    // => 이제 배열에 하나 더 추가: 4개의 정수를 넣을 메모리 할당

    //Copy integers from old array into new array
    // list의 값을 tmp로 복사
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }

    // tmp배열의 네 번째 값도 저장
    tmp[3] = 4;

    // list의 메모리를 초기화   --메모리덩어리 사용끝났으니(list)
    free(list);

    // list가 tmp와 같은 곳을 가리키도록 지정
    list = tmp; //이름 변경

    // 새로운 배열 list의 값 확인
    for (int i = 0; i < 4; i++) //i<3이 아닌 4로 바꿔줌
    {
        printf("%i\n", list[i]);
    }

    // list의 메모리 초기화
    free(list);
}

// ---------------------------------------------------malloc + free = realloc
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // tmp 포인터에 메모리를 할당하고 list의 값 복사
    int *tmp = realloc(list, 4 * sizeof(int));  //realloc: 메모리를 새로 할당 (이미 할당받은 list를 할당받아 새롭게 설정된 크기로 바꿈) -> realloc이 기존배열에서 새로운배열로 데이터 복사
    if (tmp == NULL)
    {
        return 1;
    }

    // list가 tmp와 같은 곳을 가리키도록 지정
    list = tmp;

    // 새로운 list의 네 번째 값 저장
    list[3] = 4;

    // list의 값 확인
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    //list 의 메모리 초기화
    free(list);
}
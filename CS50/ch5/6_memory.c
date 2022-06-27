// 5-6 메모리 할당과 해제

#include <stdlib.h>

void f(void)
{
    int *x = malloc(10 * sizeof(int));  //sizeof: 괄호안의 자료형 크기  (char는 1)
    // x[10] = 0;  //버퍼 오버플로우 (그 공간을 넘어 접근. 버퍼=배열). 정수는0~9라서 10(x)=할당하지않은 메모리 영역
    x[9] = 0;
    free(x);  //메모리 해체. free함수는 malloce의 반대. 할당된 메모리를 다시 반환
}

int main(void)
{
    f();
    return 0;
}

/*
malloc 함수로 메모리를 할당한 후에는
free 함수로 메모리를 해제해줘야 함
그렇지 안으면, 메모리에 저장한 값은 쓰레기 값으로 남아 용량 낭비 = 메모리 누수
*/
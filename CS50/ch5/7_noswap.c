// 5-7 메모리 교환, 스택, 힙
#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(x, y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int a, int b) //a,b는 x,y의 복사본을 받는 것(그 자체가 아니라)    -> x,y가 아닌 복사본만 바뀜
{
    int tmp = a;
    a = b;
    b = tmp;
}

/*
<데이터 저장 구역 in 메모리>
maching code -컴파일된 바이너리
globals -전역변수
heap : 메모리를 할당받을수있는 커다란 영역 (malloc호출시 메모리를 여기서 가져옴. malloc이 메모리할당하는곳)
...
stack : 함수가 호출될때 지역변수가 쌓이는 공간  (식당에 식판가져가는것처럼 맨위에껄 다시 꺼냄)
*/
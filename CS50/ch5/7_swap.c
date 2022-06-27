#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);   //x,y의 주소를 전달 (주소를 전달해서 걔가 가리키는 '값'을 변경하는거니 완벽히 전환되서 함수끝나도 그대로)
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a;   //*a = a가 가리키는 주소  (로 가면 x가 있고 1이라는 값이 있음. 그걸 tmp에 저장)
    *a = *b;
    *b = tmp;
}
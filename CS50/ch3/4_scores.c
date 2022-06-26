// 3-4 배열(1)

#include <cs50.h>
#include <stdio.h>

const int N = 3;    //상수(const) : 변하지 않는(변수명은 대문자-관습. n으로 사) //전역변수

int main(void)
{
    int scores[N]];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    printf("Average: %i\n", (scores[0] + scores[1] + scores[2]) / N);
}
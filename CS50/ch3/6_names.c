// 3-6 문자열과 배열
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string names[4];

    names[0] = "EMMA";
    names[1] = "RODRIGO";
    names[2] = "BRIAN";
    names[3] = "DAVID";

    printf("%s\n", names[0]);
    printf("%c%c%c%c\n", names[0][0], names[0][1], names[0][2], names[0][3]);   //2차원배열
}

/*
\0 : 문자열의 끝을 나타내는 널 종단 문
*/

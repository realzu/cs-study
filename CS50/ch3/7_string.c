// 3-7 문자열의 활용
#include <cs50.h>
#include <stdio.h>
#include <string.h> //strlen함수 사용

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    for (int i=0, n=strlen(s); i<n; i++)    ///for문안에 n을 통해 한번 계산 후, 기억하여 진행   (;아니고 , 주의)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

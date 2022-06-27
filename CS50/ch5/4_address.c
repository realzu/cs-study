// 4-4 문자열 비교

#include <stdio.h>

int main(void)
{
    char *s = "EMMA";   //s는 주소

    printf("%p\n", &s[0]);  //첫번째 주소값
    printf("%p\n", &s[1]);  //두번째 주소값

    printf("%c\n", *s);  //*s는 그 반대니까.      c는 char(첫글자)
    printf("%c\n", *(s+1)); //두번째 글자
}

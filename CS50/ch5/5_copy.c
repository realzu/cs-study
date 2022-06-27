// 5-5 문자열 복사

#include <cs50.h>   //toupper
#include <ctype.h>
#include <stdio.h>
#include <string.h> //strlen

/*
int main(void)
{
    string s = get_string("s: ");   //s(라는 주소)->[e/m/m/a/\0] 인데
    string t = s;                   //t(라는 주소) ->[e/m/m/a/\0] (s와 같은 걸 바라봄)

    for (int i = 0, n = strlen(s); i < n + 1; i++)  //널종단문자가지 복사해야하므로 n+1 (지금은 문자열만 복사가 아)
    {
        t[i] = s[i];
    }

    t[0] = toupper(t[0]);   //[E/m/m/a/\0] -> 즉 같은 것을 보는 s의 값도 변해지게

    printf("s: %s\n", s);   //s도 대문자로 출력
    printf("t: %s\n", t);   
}
*/

//위의 내용은 잘못 복사 -> so, 밑의 내용으로 문자열 복사하기

int main(void)
{
    char *s = get_string("s: ");   
    char *t = malloc(strlen(s) + 1);    //malloc는 메모리 할당 함수(인자는 할당받을 메모리 크기). c의함 //+1은 널종단문
            //즉, t에 메모리를 먼저 할당한 후 밑에서 문자 하나하나 복사
    strcpy(t, s);   //위의 for문에서 한 복사 부분을 strcpy로 가능

    t[0] = toupper(t[0]);  

    printf("s: %s\n", s);  
    printf("t: %s\n", t);   
}

/*
C는 문자열을 string이라 하지 않고 char *이라고 함
string s = char *
malloc함수도 할당한 메모리의 첫 바이트 '주소'를 돌려줌
*/

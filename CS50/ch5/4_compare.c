#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // 사용자로부터 s와 t 두 개의 문자열 입력받아 저장  -- 각각의 메모리 2개임 = 같은내용이라도 같은공간x
    string s = get_string("s: ");   //char *s = 
    string t = get_string("t: ");   //char *t = 

    // 두 문자열을 비교 (각 문자들을 비교)
    if (s == t) //두 변수의 주소를 비교한 것과 같음
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}

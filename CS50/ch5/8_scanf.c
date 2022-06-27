// 5-8 파일 쓰기

// int
#include <stdio.h>

int main(void)
{
    int x;
    printf("x: ");
    scanf("%i", &x);    //사용자가 입력한 값을 x주소에 저장 (마치 swap과 같음) -- '%'!!(scanf함수의 변수가 실제로 스택영역안의 x가 저장된 주소로 찾아가 사용자가 입력한 값을 저장하기 위함)
    printf("x: %i\n", x);
}

/*
변수값변경원한다면, 값으로전달하면안됌(복사본전달한 후 사라지니) -> &x사용해서 주소 전달해야함
*/

//string
#include <stdio.h>

int main(void)
{
    // char *s = NULL; //(x). Null은 메모리공간이 할당되지않았다는 뜻
    char s[5];  //크기가 5인 char 자료형의 배열
    printf("s: ");
    scanf("%s", s); //clang컴파일러는 문자배열명을 포인터처럼 다룸. so, scanf에 s배열의 첫바이트 '주소'를 바로 넘겨줌 (&필요x)
    printf("s: %s\n", s);
}

/*
배열은 메모리가 연속적으로 할당된 공간
문자열은 문자가 연속적으로 있는 것 (사실 그 메모리공간 첫번째주소를 의미)

int --    scanf("%i", &x);      -- %주의
string -- scanf("%s", s);       -- 놉
*/
// 3-8 명령행 인자
#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])   //()들을 통해 명령어 인자 받음  //  main의 반환값은 0 (=문제없)
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }    
}
/*
$.argv/ David
-> 프로그램명 뒤에 단어(David) 입력시 argv 배열에 들어간다. + argc에 단어의 개수 저장
argv[0] = .argv : 기본적으로 프로그램의 이름으로 저장
argv[1] = David
*/
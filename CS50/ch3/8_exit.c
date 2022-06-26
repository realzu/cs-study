#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]) 
{
    if (argc != 2)
    {
        printf("missing command-line argument\n");
        return 1;   //문제있으니 1 반환 -> 종료
    }
    printf("hello, %s\n", argv[1]); //값 받
    return 0;   //문제없으니 0반환 -> 종료
}

/*
argc = main함수가 받게될 입력의 개수
argv[] = 입력이 포함되어있는 배열
-> 프로그램을 명령행(커맨드)에서 실행하므로, 입력은 문자열 -> argv[]는 string배
*/

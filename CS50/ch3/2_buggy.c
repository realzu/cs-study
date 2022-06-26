// 3-2 디버깅 (= 코드에 있는 버그를 식별하고 고치는 과정)
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // printf("hello, world\n");

    string name = get_string("what's your name?"\n);
    printf("hello, %s\n", name);
}

/*
<문법적 오류>
$help50 make buggy : 에러 표시

<논리적 오류> (프로그램 제대로 작동x..)
1) printf를 통해 찾아냄 (ex. for문 반복 횟수)
2) 디버깅 (CS50 IDE통해 강의 진)
$debug50 ./buggy0
중지점 : 프로그램이 멈추는 특정 지점
Ctrl + c : 디버깅 종료
*/

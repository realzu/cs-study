// 3-4
#include <stdio.h>

int main(void)
{
    // C에서 char 입력 시 작은따옴표('') 사용   vs string("")
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';
    printf("%c %c %c\n", c1, c2, c3);
    printf("%i %i %i\n", (int) c1, (int) c2, (int) c3);
}

/*
여러 자료형 - 메모리
bool: 불리언, 1바이트
char: 문자, 1바이트
int: 정수, 4바이트
float: 실수, 4바이트
long: (더 큰) 정수, 8바이트
double: (더 큰) 실수, 8바이트
string: 문자열, ?바이트
*/
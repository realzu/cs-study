// 5-3 문자열

/*
첫번째문자의 주소 저장하면 그게 문자열임
문자열 = 문자 배열의 첫 번째 바이트 주소

마지막 바이트에 0을 저장해 끝을 알려줌 (널 종단 문자 = \0)

typedef char *string;
typedef는 새로운 자료형을 선언한다는 의미
char *는 이 값의 형태가 문자의 주소가 될 것이라는 의미
string은 이 자료형의 이름 (=변수명). 즉, string은 어떤 char의 주소를 갖고있는 변수
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // string s = "EMMA";
    char *s = "EMMA";   // char *이름
    // printf("%s\n", s);   //EMMA
    printf("%p\n", s);  //주소
    printf("%p\n", &s[0]);   //첫번째글자의 주소 (당연히 위와 같)
}

/*
s는 단순히 주소!!
문자열은 여러 문자의 묶음을 추상화한 것. 문자의 배열임

char *s에서
s라는 변수는 문자에 대한 포인터
*/
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i=0, n=strlen(s); i<n; i++)
    {
        /*
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i]-32);  //A=65, a=97 (아스키코드에서 소/대문자간의 차이 32)
        }
        else
        {
            printf("%c", s[i]);
        }
        */

        printf("%c", toupper(s[i]));    //ctype 라이브러리의 함수 사용 (위와 동일한 작업)
    }
    printf("\n");
}

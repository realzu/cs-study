#include <cs50.h>
#include <stdio.h>
#include <string.h> //strcmp함

int main(void)
{
    string names[4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};

    for (int i=0; i<4; i++)
    {
        if (strcmp(names[i], "EMMA") == 0)  //문자 같은 지 비교 (C에선 string ==(x))
        {
            printf("Found\n");
            return 0;    //0=성공(관습적). return하여 값 반환하면서 종료
        }
    }
    printf("Not Found\n");
    return 1;
}

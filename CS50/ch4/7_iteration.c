// 4-7 재귀

#include <cs50.h>
#include <stdio.h>

void draw(int h);

int main(void)  //함수는 main안에서 프로그램 작성하며 필요한 순간에 호출 -> main역시 함수 -> 즉, 함수 안에 함수 호출
{
    int height = get_int("Height: ");

    draw(height);
}

void draw(int h)    
{
    for (int i=1; i<=h; i++)    //중첩for   //iteration=반복
    {
        for (int j=1; j<=i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

/*
구글의 유머감각에 당해버린 나
궁금하다면, recursion 검색하기
"이것을 찾으셨나요?" recursoin
ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ여운 상당하네..
*/
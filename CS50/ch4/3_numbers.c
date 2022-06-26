// 4-3 선형 검색

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[6] = {4, 8, 15, 16, 23, 42};

    for (int i=0; i<6; i++)   //선형검색
    {
        if (numbers[i] == 50)
        {
            printf("Found\n");
        }
    }
    printf("Not Found\n");
}

///자료가 정렬되어 있지 않거나 그 어떤 정보도 없어 하나씩 찾아야 하는 경우에 유용
//"이제 여러분은 왜 검색 이전에 정렬해줘야 하는지 알 수 있을 것입니다."
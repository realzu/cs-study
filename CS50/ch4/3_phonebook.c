#include <cs50.h>
#include <stdio.h>
#include <string.h>

// typedef:새로운 타입을 정의,  struct:여러가지 자료형을 위한 그릇
// name과 number를 각각 다른 배열로 주면, 인덱스 순서가 다를 경우 찾을 수 없으니 같은 인덱스 가져야한다는 한계점 
// -> 새로운 자료형으로 구조체 정의하여 묶음
typedef struct
{
    string name;
    string number;
}
person; ///person이라는 자료형 생성

int main(void)
{
    person people[4];

    people[0].name = "EMMA";    //모든 정보 한번에 묶어서 표현 가
    people[0].number = "617-555-0100";

    people[1].name = "RODRIRGO";
    people[1].number = "617–555–0101";

    people[2].name = "BRIAN";
    people[2].number = "617–555–0102";

    people[3].name = "DAVID";
    people[3].number = "617–555–0103";

    for (int i=0; i<4; i++)
    {
        if (strcmp(people[i].name, "EMMA") == 0)
        {
            printf("%s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

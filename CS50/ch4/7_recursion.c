// 재귀 함수는 내부에서 자기 자신을 호출

#include <cs50.h>
#include <stdio.h>

void draw(int h);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);
}

void draw(int h)
{
    if (h == 0) //무한반복을 막아
    {
        return;
    }

    draw(h-1);  //0부터니까 h가 아니라 인덱스처럼 h-1   //재귀적으로 스스로 호출(='그려달라고' 호출. not 그림)

    for (int i=0; i<h; i++) //위에서 그려달라고 요청한걸 여기서 ㄹㅇ '그리는것'! i와h에 따라
    {
        printf("#");
    }
    printf("\n");
}

/*
함수 '호출' 순서 : draw(10) -> draw(9) -> draw(8) -> ... -> draw(0)
(모든 함수는 1줄씩 순서대로 처리되며, 그 함수가 끝날 때까지 아랫줄은 실행x)
(= 맨 밑의 for문, 즉 printf("#")인 그리기 부분은 모든 호출이 끝날 때 까지 실행x)

함수 '실행' 순서 : draw(0) -> draw(1) -> ... -> draw(10)
draw(0)은 조건에 의해 return되어 종료
따라서, 그 다음인 draw(1)부터 for문 실행 시작 --호출은 끝났으니 그 밑에 부분들 start !
*/
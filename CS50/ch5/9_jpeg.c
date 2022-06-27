// 5-9 파일 읽기
#include <stdio.h>

int main(int argc, char *argv[])
{
    //Ensure user ran program with two words at prompt
    if (argc != 2)
    {
        return 1;
    }

    //Open file
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        return 1;
    }

    //Read 3 bytes from file
    char bytes[3];  //크기가 3인 문자배열
//    unsigned char bytes[3];
    fread(bytes, 3, 1, file);   //배열, 읽을바이트수, 읽을횟수, 읽을파일

    //Check if bytes are 0xff 0xd8 0xff -- JPEG파일 검사
    if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
    {
        printf("Maybe\n");
    }
    else
    {
        printf("No\n");
    }
    fclose(file);
}
// 파일 저장

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Open file
    FILE *file = fopen("phonebook.csv", "a");   //fopen("열고싶은파일명", ("r/w/a"))

    //Get strings from user
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    //Print (write) strings to file
    fprintf(file, "%s,%s\n", name, number); //fprintf : 파일용 printf(파일에 출력)

    //Close file
    fclose(file);
}
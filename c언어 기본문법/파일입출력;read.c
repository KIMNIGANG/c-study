#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    int c;

    fp = fopen("input.txt", "r");

    if(fp == NULL)
    {
        printf("파일 열기에 실패했습니다.\n");
    }
    else
    {
        printf("파일 열기에 성공했습니다.\n");
    }

    while((c = fgetc(fp)) != EOF)    //EOF = end of file(파일의 끝까지), 파일의 모든내용을 읽으면서 모두 출력한다
    {
        putchar(c);
    }
    fclose(fp);
    return 0;
}
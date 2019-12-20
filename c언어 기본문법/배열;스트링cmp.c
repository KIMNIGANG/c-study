#include <stdio.h>
#include <string.h>

int main(void)
{
    char inputOne[5] = "A";
    char inputTwo[5] = "D";
    printf("문자열 비교 : %d\n", strcmp(inputOne, inputTwo));
    return 0;
}
#include <stdio.h>

int main(void)
{
    char a, b;
    printf("문자를 2개 입력하세요");
    scanf("%c %c", &a, &b);
    printf("%c %c", b, a);
}
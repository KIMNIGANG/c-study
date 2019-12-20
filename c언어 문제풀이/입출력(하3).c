#include <stdio.h>

//년월일 입력받아 형태 바꿔 출력하기

int main(void)
{
    int a, b, c;
    printf("년/월/일을 입력하세요");
    scanf("%d/%d/%d", &a, &b, &c);
    printf("%d/%d/%d", c, b, a);
    return 0;
}
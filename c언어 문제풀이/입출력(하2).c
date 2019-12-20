#include <stdio.h>

//정수 한 개 입력받아 나누어 출력하기

int main(void)
{
    int a, b, c, d;
    printf("4자리 정수를 하나 입력하세요");
    scanf("%1d%1d%1d%1d", &a, &b, &c, &d);
    printf("%d\n%d\n%d\n%d", 1000 * a, 100 * b, 10 * c, 1 * d);
    return 0;
}
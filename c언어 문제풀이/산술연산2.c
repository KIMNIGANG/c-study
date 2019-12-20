#include <stdio.h>

//정수 3개 입력받아 합과 평균 출력하기

int main(void)
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("합은 %.3f, 평균은 %.2f", a + b + c, (a + b + c) / 3);
    return 0;
}
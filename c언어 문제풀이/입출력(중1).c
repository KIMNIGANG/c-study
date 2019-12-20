#include <stdio.h>

//실수 1개 입력받아 둘째 자리까지 출력하기

int main(void)
{
    double a;
    printf("실수 한개를 입력하세요");
    scanf("%lf", &a);
    printf("%.2f", a);
}
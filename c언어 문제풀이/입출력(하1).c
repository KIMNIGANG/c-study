#include <stdio.h>

//실수 한개 입력받아 부분 별로 출력하기

int main(void)
{
    int a, b;
    printf("소수를 입력하세요");
    scanf("%d.%d", &a, &b);
    printf("정수부분 :%d\n소수부분%d", a, b);
}
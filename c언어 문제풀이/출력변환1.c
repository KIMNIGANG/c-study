#include <stdio.h>

//10진법 정수받아서 8진법으로 출력하기

int main(void)
{
    int a;
    printf("10진법 정수를 입력하세요");
    scanf("%d", &a);
    printf("%d의 8진수는 %o입니다.", a, a);
}
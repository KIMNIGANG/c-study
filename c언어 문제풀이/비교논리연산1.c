#include <stdio.h>

//참 거짓이 서로 다를 때에만 참 출력하기

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a != 0 || b != 0)
    {
        printf("%d", 1);
    }
    else
    {
        printf("%d", 0);
    }
    
    return 0;
}
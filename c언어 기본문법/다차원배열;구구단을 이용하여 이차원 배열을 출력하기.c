#include <stdio.h>

int main(void)
{
    int i, j;
    int gugudan[10][10];
    for(i = 1; i <= 9; i++)
    {
        printf("\n[ %d단 ]\n\n", i);    //몇단인지를 표시한다
        for(j = 1; j <= 9; j++)
        {
            gugudan[i][j] = i * j;
            printf("%d X %d = %d\n", i, j, x);
        }
    }
    return 0;
}
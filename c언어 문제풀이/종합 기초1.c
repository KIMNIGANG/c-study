#include <stdio.h>
#include <string.h>

int main(void)
{
    int pan[19][19] = { NULL };
    int n, x, y;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        pan[x - 1][y - 1] = 1;
    }
    for (int i = 0; i < 19; i++)
    {
        for (int i = 0; i < 19; i++)
        {
            printf("%d", pan[i][i]);
        }
        printf("\n");
    }
    return 0;
}
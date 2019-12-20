#include <stdio.h>

int main(void)
{
    int n, i, j, temp;
    int array[101];

    printf("how many numbers:");
    scanf("%d", &n);
    printf("\nput %d numbers", n);
    for (i = 0; i < n; i++)
    {
        printf("\n%d :", i + 1);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        j = i;
        while (array[j] > array[j + 1])
        {
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
            j--;
        }
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
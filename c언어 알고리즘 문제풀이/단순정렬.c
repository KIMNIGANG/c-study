#include <stdio.h>

// N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오

int array[1001];

int main(void)
{
    int N, i, j, min, temp, index;
    printf("how many number");
    scanf("%d", &N);
    for ( i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    for ( i = 0; i < N; i++)
    {
        min = 1001;
        for ( j = i; j < N; j++)
        {
            if(min > array[j])
            {
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }
    for ( i = 0; i < N; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}
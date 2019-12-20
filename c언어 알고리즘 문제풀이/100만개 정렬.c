#include <stdio.h>

int N, data[1000000];

void quickSort(int* data, int start, int end)   
{
    if (start >= end)
    {
        return;
    }
    
    int key = start;
    int i = start + 1, j = end, temp;

    while (i <= j)
    {
        while(data[i] <= data[key])
        {
            i++;
        }
        while(data[j] >= data[key] && j > start)
        {
            j--;
        }
        if(i > j)
        {
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        }
        else
        {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }
    quickSort(data, start, j - 1);
    quickSort(data, j + 1, end);
    
}

void show(int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", data[i]);
    }
}

int main(void)
{
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &data[i]);
    }
    quickSort(data, 0, N - 1);
    show(N);
    return 0;
}
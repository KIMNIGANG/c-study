#include <stdio.h>

// 퀵정렬은 하나의 큰 문제를 두개의 작은 문제로 분할하는 식으로 빠르게 정렬한다.
// 특정한 값을 기준으로 큰 숫자와 작은숫자를 서로 교환한 뒤에 배열을 반으로 나눈다.

int N = 10;
int data[10] = {1, 10, 5, 7, 8, 6, 4, 3, 2, 9};

void show() {
    int i;
    for ( i = 0; i < N; i++)
    {
        printf("%d\n", data[i]);
    }
}

void quickSort(int* data, int start, int end) {
    if (start >= end)   
    {
        return;
    }
    
    int pivot = start;
    int i= start + 1, j = end, temp;

    while (i <= j)
    {
        while (i <= end && data[i] <= data[pivot])
        {
            i++;
        }
        
        while (j > start && data[j] >= data[pivot])
        {
            j--;
        }
        
        if(i > j)
        {
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
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

int main(void)
{
    quickSort(data, 0, N - 1);
    show();
    return 0;
}
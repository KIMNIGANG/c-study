#include <stdio.h>

// 버블 정렬은 옆에 있는 값과 비교해서 더 작은 값을 앞으로 보내는 방법이다.

int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

int main(void)
{
    int i, j, temp;
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 9 - i; j++)
        {
            if (data[j] > data[j + 1])
            {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
        
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", data[i]);
    }
    return 0;
}
#include <stdio.h>

// 선택정렬 = 가장 작은 것을 선택해서 제일 앞으로 보내면 어떨까?
// 가장 원시적이고 기초적인 방법 중 하나입니다.
// min 은 가장 작은 숫자를 일시적으로 담는 변수, temp는 두 숫자의 위치를 서로 바꾸기 위해 사용하는 변수입니다.


int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

int main(void)
{
    int i, j, min, index, temp;
    for ( i = 0; i < 10; i++)
    {
        min = 1000000;  
        for (j = i; j < 10; j++)
        {
            if (min > data[j])
            {
               min = data[j];
               index = j;
            }
        }
        temp = data[i];
        data[i] = data[index];
        data[index] = temp;
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", data[i]);
    }
    return 0;
}
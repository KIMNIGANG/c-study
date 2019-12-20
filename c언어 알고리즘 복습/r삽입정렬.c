#include <stdio.h>

//삽입정렬은 각 숫자를 적절한 위치에 삽입하는 방법으로 문제를 해결한다.(필요할 때만 위치를 바꾼다)


int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9,};

int main(void)
{
    int i, j, temp;
    for ( i = 0; i < 9; i++)
    {
        j = i;
        while (data[j] > data[j + 1])
        {
            temp = data[j];
            data[j] = data[j + 1];
            data[j + 1] = temp;
            j--;
        }
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", data[i]);
    }
    
    return 0;
}
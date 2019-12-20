#include <stdio.h>

/*바로 가까이에있는 두 숫자끼리 비교를 해서 당장 더 작은 숫자를 앞으로 보내주는 것을
반복하는 것이다. 효율성은 가장 떨어진다*/

int main(void)
{
    int i, j, temp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if(array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }    
    return 0;
}
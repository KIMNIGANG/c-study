#include <stdio.h>

//포인터는 c언어의 무기이다. 메모리의 주소를 저장하는 변수, int *y = &x; (x주소를 y가 갖게 되었다.)

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int x = 1;
    int y = 2;
    swap(&x, &y);
    printf("x = %d\ny = %d\n", x, y);
    return 0;
}
#include <stdio.h>

struct point {
    int x;
    int y;
};

void comparePoint (struct point p1, struct point p2) {
    if((p1.x == p2.x) && (p1.y == p2.y))    //구조체는 이렇게 따로 만들어서 비교를 해줘야한다
    {
        printf("p1 is same as p2");
    }
}

int main(void)
{
    struct point p1;
    struct point p2;

    p1.x = 30;
    p1.y = 10;

    p2.x = 30;
    p2.y = 10;

    // if(p1 == p2)     //구조체 자체는 비교할 수 없다
    // {
    //     printf("p1 is same as p2");
    // } 
    
    comparePoint(p1, p2);

    return 0;
}
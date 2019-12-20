#include <stdio.h>
#include <stdlib.h>     //동적메모리를 사용하기 위해 꼭 필요한 헤더파일

int main(void)
{
    int *pi;
    pi = (int *)malloc(sizeof(int)); //malloc = 메모리를 할당해라, int형은 4byte
    if(pi = NULL)
    {
        printf("동적 메모리를 할당에 실패했습니다.\n");
        exit(1);
    }
    *pi = 100;
    printf("%d\n", *pi);
    //동적 메모리를 사용한 이후에는 무조건 해당 메모리를 반환합니다.
    free(pi);   //메모리 할당 해제
    
    return 0;
}
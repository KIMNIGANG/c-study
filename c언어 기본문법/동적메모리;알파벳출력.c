#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *pc = NULL;
    int i;
    pc = (char *)malloc(100 * sizeof(char));
    if(pc == NULL)
    {
        printf("동적 메모리 할당 실패.\n");
        exit(1);
    }
    for(i = 0; i < 26; i++)
    {
        *(pc + i) = 'a' + i;    //아스키코드
    }
    //아스키코드에서 0은 NULL
    *(pc + i) = 0; //z다음에 null값을 넣어준다

    printf("%s\n", pc);
    free(pc);
    return 0;
}
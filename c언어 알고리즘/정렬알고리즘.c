#include <stdio.h>

//가장 작은 것을 찾아서 앞으로 보내준다(반복)

//O(N * N)      -> 빅 오 표기법(대략적인 수행시간)(데이터개수의 제곱)

int main(void)
{
    int i, j, min, index, temp; //i,j는 배열에 있는 글자를 반복적으로 탐색하기 위함. min은 최솟값,index위치,temp특정한 두 숫자를 서로 바꾸기 위함
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for (i = 0; i < 10; i++)
    {
        min = 9999;     //그냥 큰 숫자를 한번 넣어준다
        for (j = i; j < 10; j++)
        {
            if (min > array[j])
            {
                min = array[j];
                index = j;
            }
        }
        temp = array[i];                //swaping함수
        array[i] = array[index];
        array[index] = temp;
    }
    for(i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
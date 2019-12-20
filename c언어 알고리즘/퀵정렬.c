#include <stdio.h>

//퀵 정렬은 하나의 큰 문제를 두 개의 작은 문제로 분할하는 식으로 빠르게 정렬합니다.
//더 쉽게 말하자면 특정한 값을 기준으로 큰 숫자와 작은 숫자를 서로 교환한 뒤에 배열을 반으로 나눕니다.
//기준 값이 필요한다, 이를 피벗(pivot)이라고 한다.
//분할 정복이라고도 한다

//보통 가장 앞에 있는 값을 피벗값으로 선택한다, 왼쪽에서 오른쪽으로 이동(검사) 비펏값 보다 큰값을 선택한다, 
//오른쪽에서 왼쪽으로 검사할때에는 피벗값보다 작은 값을 고른다.
//큰값과 작은 값을 바꿔준다

int number = 10;
int data[10] = {3, 7, 8, 1, 5, 9, 6, 10, 2, 4};

void show()
{
    int i;
    for (i = 0; i < number; i++)
    {
        printf("%d ", data[i]);
    }
}

void quickSort(int *data, int start, int end)
{
    if (start >= end) // 원소가 1개인 경우
    {
        return;
    }

    int key = start;    //키는 첫번째 원소
    int i = start + 1   //왼쪽 출발지점
    int j = end     //오른쪽 출발지점
    int temp;

    while(i <= j)
    {
        while(data[i] <= data[key]) //키 값보다 더 큰 값을 찾는다
        {
            i++;
        }
        while (j > start && data[j] >= data[key])    //키 값보다 작은 값을 찾는다
        {
            j--;
        }
        if(i > j)       //엇갈린 상태면 키 값과 교체
        {
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
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
    quickSort(data, 0, number - 1);
    show();
    return 0;
}
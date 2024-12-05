#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5][5] = { 0 };
    int cnt = 0;

    for (int i = 0; i < 5; i++) // 행 반복
    {
        for (int j = 0; j < 5; j++) // 열 반복
        {   
            if (i % 2 == 0) // 짝수 행: 왼쪽에서 오른쪽으로
                a[i][j] = ++cnt;
            else // 홀수 행: 오른쪽에서 왼쪽으로
                a[i][4 - j] = ++cnt;
        }
    }

    // 배열 출력
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            printf("%d\t", a[i][j]); // 값 출력
        }
        printf("\n");
    }

    return 0;
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5] = {3, 5, 1, 4, 2};
    int temp = 0;
    int locate = 0;
    for (int j = 0; j < 4; j++) //4번 돌자
    {
        locate = j; //최솟값 넣어야하는 기준점 정의
        for (int i = j + 1; i < 5; i++) //4번, 3번, 2번, 1번 돌게하기
        {
            if (a[i] < a[locate]) //기준점 배열의 값보다 작은 애가 나타나면
            {
                locate = i; //기준졈 변수에 작은 애의 인덱스 저장
            }
        }
        temp = a[j];
        a[j] = a[locate];
        a[locate] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}

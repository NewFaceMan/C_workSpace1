// 문제 6: 다중 반환
// 	6.	두 정수를 입력받아 큰 값과 작은 값을 동시에 반환하는 함수를 작성하시오. 단, 포인터를 사용하여 두 값을 반환하도록 구현하라.
#include <stdio.h>
void fuc(int a, int b, int *max, int *min);

int main(int argc, char const *argv[])
{
    int a, b;
    int max, min;
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);
    fuc(a, b, &max, &min);

    printf("큰 값: %d, 작은 값: %d\n", max, min);
    return 0;
}
void fuc(int a, int b, int *max, int *min)
{
    if (a > b)
    {
        *max = a;
        *min = b;
    }
    else
    {
        *max = b;
        *min = a;
    }
    
    
}
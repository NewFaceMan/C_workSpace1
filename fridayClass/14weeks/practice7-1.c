//배열에 수를 입력받고 합계를 구하기 (포인터로 바꾸기)
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5];
    int *p = arr;
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("%d번째 숫자:", i+1);
        scanf("%d", p + i);
        sum += *(p + i);
    }
    printf("입력 숫자의 합 => %d\n", sum);
    
    return 0;
}

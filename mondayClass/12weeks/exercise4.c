// 정수 n개 입력받고 합을 출력 (동적메모리 사용)

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int n;
    int *arr;
    int sum = 0;
    printf("정수의 개수를 입력하세요: ");
    scanf("%d", &n);
    arr = (int *) malloc(n * sizeof(int));

    if (arr == NULL)    
    {
        printf("메모리 할당 실패! \n");
        return 1;
    }

    printf("%d개의 정수를 입력하세요 : ", n);
    for (int i = 0; i < n; i++)
    {
        printf("정수 %d : ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("정수의 합: %d", sum);
    free(arr);
    return 0;
}

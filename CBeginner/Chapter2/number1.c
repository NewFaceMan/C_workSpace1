#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2, num3, num4, sum;
    printf("첫 번째 계산할 값을 입력하세요 ==> ");
    scanf("%d", &num1);
    printf("두 번째 계산할 값을 입력하세요 ==> ");
    scanf(" %d", &num2);
    printf("세 번째 계산할 값을 입력하세요 ==> ");
    scanf(" %d", &num3);
    printf("네 번째 계산할 값을 입력하세요 ==> ");
    scanf(" %d", &num4);
    sum = num1 + num2 - num3 * num4;
    printf("%d + %d + %d + %d = %d", num1, num2, num3, num4, sum);
    

    return 0;
}

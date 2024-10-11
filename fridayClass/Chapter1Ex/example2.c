#include <stdio.h>

int main() {
    int a, b;
    int result;
    int num;

    printf("첫 번째 계산할 값을 입력하세요 ==> ");
    scanf("%d", &a);
    printf("<1> 덧셈 <2> 뺄셈 <3> 곱셈 <4> 나눗셈 ==> ");
    scanf("%d", &num);
    printf("두 번째 계산할 값을 입력하세요 ==> ");
    scanf("%d", &b);

    if (num == 1)
    {
        result = a + b;
        printf("%d + %d = %d \n", a, b, result);
    }

    if (num == 2)
    {
        result = a - b;
        printf("%d - %d = %d \n", a, b, result);
    }
    if (num == 3)
    {
        result = a * b;
        printf("%d * %d = %d \n", a, b, result);

    }if (num == 4)
    {
        result = a / b;
        printf("%d / %d = %d \n", a, b, result);
    }
    return 0;
}
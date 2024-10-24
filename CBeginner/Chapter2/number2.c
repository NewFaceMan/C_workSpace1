#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("첫 번째 값 => ");
    scanf("%d", &num1);
    printf("두 번째 값 => ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, num1+num2);
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d * %d = %d\n", num1, num2, num1*num2);
    printf("%d / %d = %d\n", num1, num2, num1/num2);

    return 0;
}

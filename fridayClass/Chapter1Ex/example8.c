#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    char c;
    int sum;
    while(1)
    {
        printf("계산할 두 수 입력(멈추려면 control + C): ");
        scanf("%d %d", &a, &b);
        printf("계산할 연산자를 입력하세요: ");
        scanf(" %c", &c);
        switch (c)
        {
        case '+':
        sum = a + b;
            printf("%d %c %d = %d \n", a, c, b, sum);
            break;
        
        case '-':
        sum = a - b;
            printf("%d %c %d = %d\n", a, c, b, sum);
            break;

            case '%':
        sum = a % b;
            printf("%d %c %d = %d\n", a, c, b, sum);
            break;

        case '*':
                sum = a * b;
                printf("%d %c %d = %d\n", a, c, b, sum);
                break;
            case '/':
        sum = a / b;
            printf("%d %c %d = %d\n", a, c, b, sum);
            break;
            default : 
            printf("연산자를 잘못 입력하였습니다. \n");
        }

    }

    return 0;
}
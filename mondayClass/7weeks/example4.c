#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, y;
    char z;
    while (1)
    {
    printf("사칙연산 프로그램 시작, 식을 입력하세요: ");
    scanf("%d%c%d", &x, &z, &y);
    switch (z)
    {
    case '+':
        printf("%d+%d = %d\n", x, y, x+y);
        continue;

    case '-':
        printf("%d-%d = %d\n", x, y, x-y);
        continue;

    case '/':
        if(y != 0) {
        printf("%d/%d = %f\n", x, y, (float)x/y);
        continue;
        }else 
        printf("0으로 나눌 수 없습니다.\n");
        break;

    case '*':
        printf("%d*%d = %d\n", x, y, x*y);
        continue;

    default:
        printf("잘못된 연산자입니다. 프로그램 종료.\n");
        return 0;
    }

    }
    return 0;
}

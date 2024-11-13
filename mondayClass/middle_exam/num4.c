#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, y;
    char b;
    while (1)
    {
        printf("두 정수와 사칙연산 기호를 입력하세요.");
        scanf("%d %c %d", &x, &b, &y);

        switch (b)
        {
        case '+':
            printf("%d%c%d=%d\n", x, b, y, x+y);
            break;
        case '-':
            printf("%d%c%d=%d\n", x, b, y, x-y);
            break;
        case '*':
            printf("%d%c%d=%d\n", x, b, y, x*y);
            break;   
        case '/':
            if (y == 0)
            {
                printf("0으로 나눌 수 없습니다.\n");
                continue;
            }
            printf("%d%c%d=%.2f\n", x, b, y, (float)x/y);
            break;

        default: printf("잘못된 연산자입니다. 프로그램 종료\n");
                return 0;
            break;
        }
    }
    
    return 0;
}

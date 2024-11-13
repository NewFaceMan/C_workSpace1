// 단순 if문을 활용한 간단한 계산기
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, y;
    char c;
    printf("첫 번째 수를 입력하세요:");
    scanf("%d", &x);
    printf("계산할 연산자를 입력하세요 : ");
    scanf(" %c", &c);
    printf("두 번째 수를 입력하세요:");
    scanf(" %d", &y);

    if (c == '+')
        printf("%d %c %d = %d입니다.\n", x, c, y, x+y);        
    else if (c == '-')
        printf("%d %c %d = %d입니다.\n", x, c, y, x-y);        
    else if (c == '*')
        printf("%d %c %d = %d입니다.\n", x, c, y, x*y);        
    else if (c == '/')
        printf("%d %c %d = %.2f입니다.\n", x, c, y, (float) x/y);    
    else
        printf("잘못 입력하셨습니다.\n");
    
    return 0;
}

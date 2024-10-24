#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    int a, b, c;

    printf("연산 선택(+또는*) => ");
    scanf("%c", &ch);
    printf("첫 번째 값 => ");
    scanf(" %d", &a);
    printf("두 번째 값 => ");
    scanf(" %d", &b);
    printf("세 번째 값 => ");
    scanf(" %d", &c);

    if (ch == '+')
    {
        printf("%d + %d + %d = %d\n", a, b, c, a+b+c);
    } else if (ch == '*')
    {
        printf("%d * %d * %d = %d\n", a, b, c, a*b*c);
    }
    
    
    return 0;
}

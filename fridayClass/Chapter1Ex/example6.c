#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    for (; ; )
    {
    printf("더할 두 수 입력(멈추려면 control + C): ");
    
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, a + b);
    }

    return 0;
}
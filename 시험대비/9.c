#include <stdio.h>
int fac(int);

int main(int argc, char const *argv[])
{
    int n = 0 ;
    printf("정수를 입력하세요 : ");
    scanf("%d", &n);
    printf("%d의 팩토리얼 값 : %d\n", n, fac(n));
    return 0;
}

int fac(int a)
{
    int multi = 1;
    for (int i = a; i > 0; i--)
    {
        multi *= i;
    }
    return multi;
}
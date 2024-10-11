#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("정수값 하나를 입력하세요\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("짝수입니다,\n");
    }else
    {
        printf("홀수입니다.\n");
    }
    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("첫 번째 값 => ");
    scanf("%d", &a);
    printf("두 번째 값 => ");
    scanf("%d", &b);

    if (b == 0)
    {
        printf("다시 입력하세요, 두 번째 값은? => ");
        scanf("%d", &b);
    }

    if (b == 0)
    {
        printf("또 다시 입력하세요, 두 번째 값은? => ");
        scanf("%d", &b);

    }if (b == 0)
    {
        printf("0을 세 번 입력하셨습니다. 프로그램을 종료합니다.\n");
        return 0;
    }
    
    printf("%d / %d = %d\n", a, b, a/b);
    return 0;
}

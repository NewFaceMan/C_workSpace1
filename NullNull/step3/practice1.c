#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num = 0;
    printf("정수를 입력하세요 (1 ~ 9): \n");
    scanf("%d", &num);
    if (num > 10 || num < 1)
    {
        puts("1~9사이 정수를 입력하세요.");
        return 0;
    }

    int i = 0;
    while (i < num)
    {
    printf("%c ", '*');
    i++;
    }
    printf("\n");
    return 0;
}

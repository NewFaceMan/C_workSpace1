#include <stdio.h>
int main(int argc, char const *argv[])
{
    char op;
    char str[12];

    printf("1. 문자 입력 :\t");
    scanf("%c", &op);

    getchar();
    printf("2. 문자열 입력 :\t");
    scanf("%s", str);

    printf("문자 출력 : %c\t", op);
    printf("\n문자열 출력 : |%-12s\t|\n", str);

    return 0;
}

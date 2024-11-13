#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    char str [10];

    printf("1. 문자 입력:");
    scanf("%c", &ch);

    printf("2. 문자열 입력: ");
    scanf("%s", str);

    printf("입력한 문자 출력 : %c, 크기 : %zu\n", ch, sizeof(ch));
    printf("입력한 문자열 출력 : %s, 크기 : %zu\n", str, sizeof(str));

    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    char ch2;

    printf("1. 첫 번째 문자 입력:");
    scanf("%c", &ch);

    getchar();
    printf("2. 두 번째 문자 입력: ");
    scanf("%c", &ch2);

    printf("입력한 문자 출력 : %c, 크기 : %zu\n", ch, sizeof(ch));
    printf("입력한 문자열 출력 : %c, 크기 : %zu\n", ch2, sizeof(ch2));

    return 0;
}

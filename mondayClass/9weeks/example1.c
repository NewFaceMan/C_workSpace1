#include <stdio.h>
int main(int argc, char const *argv[])
{
    int aa[4];
    int hap;

    printf("첫 번쨰 숫자를 입력하세요 : ");
    scanf("%d", aa[0]);
    printf("두 번째 숫자를 입력하세요 : ");
    scanf("%d", aa[1]);
    printf("세 번째 숫자를 입력하세요 : ");
    scanf("%d", aa[2]);
    printf("4 번째 숫자를 입력하세요 : ");
    scanf("%d", aa[3]);

    hap = aa[0] + aa[1] + aa[2] + aa[3];

    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("16진수를 입력하세요: ");
    scanf("%x", &a);
    printf("입력한 16진수는 10진수로 %d입니다.", a);
    return 0;
}

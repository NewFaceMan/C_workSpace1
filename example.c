#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum = 0;
    int a = 0;

    printf("1에서 10까지 합을 구합니다.\n");
    do
    {
        sum += a;
        a++;
    } while (a <= 10);
    printf("합은 %d입니다.\n", sum);
    return 0;
}

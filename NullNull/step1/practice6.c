#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c = 0;
    int max = 0;
    scanf("%d %d %d", &a, &b, &c);
    max = (a > b) ? a : b; //a가 b보다 크면 a를 max에 대입, b가 더 크면 max에 b대입
    max = (max > c) ? max : c;

    printf("Max : %d\n", max);
    return 0;
}
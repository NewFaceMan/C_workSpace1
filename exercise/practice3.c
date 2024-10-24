#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 200;
    printf("200을 오른쪽으로 1회 시프트하면 %d\n", a >>1);
    printf("200을 오른쪽으로 2회 시프트하면 %d\n", a >>2);
    printf("200을 오른쪽으로 3회 시프트하면 %d\n", a >>3);
    printf("200을 오른쪽으로 4회 시프트하면 %d\n", a >>4);
    printf("200을 오른쪽으로 5회 시프트하면 %d\n", a >>5);
    return 0;
}

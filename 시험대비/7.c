#include <stdio.h>
int multi(int, int);

int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);
    int final = multi(a, b);
    printf("a * b = %d\n", final);
    return 0;
}

int multi(int a, int b)
{
    return a * b;
}
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);
    if (a >= 20)
    {
        printf("%d", a / 6);
    } else
    {
        printf("%d", a / 3);
    }
    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, temp;
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;
    
    printf("a: %d, b: %d\n", a, b);
    return 0;
}

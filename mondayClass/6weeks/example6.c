#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        printf("%d ", i);
    }
    
    return 0;
}
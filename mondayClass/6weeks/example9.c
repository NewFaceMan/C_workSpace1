#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    char b;
    int count;
    scanf("%c %d", &b, &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i; j++)
        {
            printf("%c", b);
        }
        printf("\n");
        
    }
    
    return 0;
}

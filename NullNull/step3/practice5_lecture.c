#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 + i; j++)
        {
            if (j >= 4-i)
            {
                printf("*");
            } else
            {
                printf(" ");
            }
        }
    printf("\n");
    }
    
    return 0;
}

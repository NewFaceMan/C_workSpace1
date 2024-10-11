#include <stdio.h>
int main(int argc, char const *argv[])
{
   

    for (int i = 9; i > 1; i--)
    {
        for (int j = 9; j > 0; j--)
        {
            printf("%d * %d = %d \t", i, j, i * j);
        }
        
    }
    
    return 0;
}

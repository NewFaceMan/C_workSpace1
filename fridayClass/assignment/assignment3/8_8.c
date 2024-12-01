#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ary[2][3];
    int i, k;
    int num = 10;

    for ( i = 0; i < 2; i++)
    {
        for ( k = 0; k < 3; k++)
        {
            ary [i][k] = -num;
        }
    }
    
    for ( i = 0; i < 2; i++)
    {
        for ( k = 0; k < 3; k++)
        {
            printf("%3d", ary[i][k]);
        }
        printf("\n");
    }
    
    return 0;
}

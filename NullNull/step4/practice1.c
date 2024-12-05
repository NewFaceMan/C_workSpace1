#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5] = {50, 40, 10, 50, 20};
    int nMax = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] >= nMax)
        {
            nMax = a[i];
        }
    }
    printf("MAX : %d\n", nMax);    
    return 0;
}

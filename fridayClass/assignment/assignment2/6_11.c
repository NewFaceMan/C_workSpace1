#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    int hap = 0;

    for (int i = 1; i <= 1000; i++)
    {
        if (i % 3 == 0 || i % 7 == 0)
            hap = hap + i;
    }

    printf("3의 배수 또는 7의 배수의 합: %d \n", hap);
    return 0;
    
}

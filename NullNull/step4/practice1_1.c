#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5] = {3, 5, 1, 4, 2};
    int temp = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[0] >= a[i+1])
        {
            temp = a[0];
            a[0] = a[i+1];
            a[i+1] = temp;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}

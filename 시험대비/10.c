#include <stdio.h>
void doubleArray(int [], int);

int main(int argc, char const *argv[])
{
    int n[5] = {1, 2, 3, 4, 5};
    int size = sizeof(n) / sizeof(n[0]);
    doubleArray(n, size);
    for (int i = 0; i < size; i++)
    {
        printf("n[%d]의 요소는 : %d\n", i, n[i]);
    }
    return 0;
}
void doubleArray(int n[], int size)
{
    for (int i = 0; i < size; i++)
    {
        n[i] *= 2;
    }
    
}
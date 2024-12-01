// 배열에서 최댓값 찾기 1
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5] = {50, 40, 10, 50, 20};
    int nMax = 0;

    for (int i = 0; i < 5; i++)
    {
        if (a[i] <= a[i+1])
        {
            nMax = a[i+1];
        }
        else {
            continue;
        }
    }
    
    printf("MAX = %d\n", nMax);
    return 0;
}

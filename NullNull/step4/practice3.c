#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5][5];
    int cnt = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            a[i][j] = cnt;
            cnt++;
        printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

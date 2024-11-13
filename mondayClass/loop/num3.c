// 2단부터 9단까지 구구단을 출력하는데, 열로 나오게 할 것
#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 1; i < 10; i++)
{
        for (int j = 2; j < 10; j++)
        {
            printf("%d * %d = %2d\t", j, i, j*i);
        }
        printf("\n");
    }
    
    return 0;
}

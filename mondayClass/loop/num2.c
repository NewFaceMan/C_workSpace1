// 2단부터 9단까지 구구단 출력
#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 2; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)        
        {
            printf("%d * %d = %d\t", i, j, i*j);
        }
        printf("\n");
    }
    
    return 0;
}

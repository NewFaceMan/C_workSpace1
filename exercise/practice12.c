//6.2단부터 5단까지의 구구단을 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int  i = 2; i < 6; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            printf("%d * %d = %d\t", i, j, i*j);
        }
        printf("\n");
    }
    

    return 0;
}

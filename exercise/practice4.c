#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 7; j >= 3; j--)
        {
            printf("%d * %d = %d\t", j, i, j*i);
        }
        printf("\n");
        
    }
    
    return 0;
}
//계속 바뀌는 변수는 내부 루프, 고정되어있는 숫자는 외부 루프라고 이해하기.
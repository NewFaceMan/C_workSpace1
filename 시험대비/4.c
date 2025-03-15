#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int cnt = 0;
    printf("1~45 중에서 숫자 6개 출력\n");
    printf("rand() : ");
    
    for ( cnt = 1; cnt <= 6; cnt++)
    {
        printf("%d ", rand()); //범위를 지정하지 않은 출력
    }
    printf("\n");
    printf("(rand() %% 45) : ");
    for ( cnt = 1; cnt <= 6; cnt++)
    {
        printf(" %d ", (rand() % 45)); //0~44 사이의 값 출력
    }
    printf("\n");
    printf("1 + (rand() %% 45) : ");
    for ( cnt = 1; cnt <= 6; cnt++)
    {
        printf(" %d ", 1 + (rand() % 45));
    }
    printf("\n");    
    
    return 0;
}

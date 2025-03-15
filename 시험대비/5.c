#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 45

int main(int argc, char const *argv[])
{
    printf("1~45 중에서 숫자 6개 출력\n");
    srand((unsigned) time(NULL)); //srand((unsigned) time(NULL));는 현재 시간을 시드로 설정하여 매번 실행할 때마다 다른 난수 시퀀스를 생성하도록 초기화하는 코드

    printf("srand() 출력 : ");
    for (int i = 1; i <= 6 ; i++)
    {
        printf(" %d ", 1 + (rand() % NUM));
    }
    printf("\n");
    return 0;
}

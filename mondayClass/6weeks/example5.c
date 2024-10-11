#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("정수를 입력하세요(입력한 수의 구구단이 나올 것입니다) : ");
    scanf("%d", &a);
    for (int i = 1; i < 10; i++)
    {
        printf("%d * %d = %d \n", a, i, a * i);
    }
    
    return 0;
}

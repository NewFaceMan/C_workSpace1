#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("정수 하나를 입력하세요 : ");

    scanf("%d", &a);

    if (a % 3 == 0 && a % 4 == 0)
    {
        printf("3과 4의 배수\n");

    } else if (a % 3 == 0)  
    {
        printf("3의 배수\n");

    } else if (a % 4 == 0)
    {
        printf("4의 배수\n");

    } else
    {
        printf("해당 없음\n");
    }
    
    return 0;
}

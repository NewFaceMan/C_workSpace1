#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    while (1)
    {
        int sum = 0;
        printf("하나의 정수를 입력하세요 : ");
        scanf("%d", &x);
        if (x < 0)
        {
            printf("음수가 입력되었습니다. 프로그램을 종료합니다.\n");
            break;
        }
        for (int i = 1; i <= x; i++)
        {
            sum += i;
        }
        printf("%d", sum);
        printf("\n");
        
    }
    
    return 0;
}

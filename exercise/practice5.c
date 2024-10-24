#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    int sum = 0;
    printf("1부터 더하기 원하는 수를 입력하세요? ");
    scanf("%d", &a);
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
        if (i == a)
        break;
    }
    printf("1부터~%d까지 합은 %d\n", a, sum);
        
    
    
    return 0;
}

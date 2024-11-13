// 정수 n 입력, 정수를 전달하면 1부터 해당 정수까지의 합을 반환하는 함수를 작성해라.
// 단, 계속 반복 수행하며 n이 0이면 반복문을 종료한다.
#include <stdio.h>
int sumUpTo(int);
int main(int argc, char const *argv[]) 
{
    
    int n;
    do
    {
        printf("정수를 입력하세요: (1부터 해당 정수까지의 합을 반환합니다.) : ");
        scanf("%d", &n);
        if (n == 0)
        {
            printf("프로그램을 종료합니다\n");
            break;
        }
        
        printf("1부터 %d까지의 합은 : %d\n", n, sumUpTo(n));
    } while (1);
    return 0;
}
int sumUpTo(int x) {
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum += i;
    }
    return sum;
}

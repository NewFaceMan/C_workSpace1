//8. 정수를 입력받아 그 수의 팩토리얼을 계산하는 프로그램을 for문으로 작성하시오.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    int factorial = 1;
    printf("정수를 입력하세요:");
    scanf("%d", &a);
    for (int i = a; i >= 1; i--)
    {
        factorial *= i; 
    }
    printf("%d의 factorial 값은 %d입니다.\n", a, factorial);
    
    return 0;
}

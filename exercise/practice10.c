//4. 3자리 정수를 입력받아 각 자리 숫자의 합을 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    int sum = 0;
    printf("3자리의 정수를 입력하세요 : ");
    scanf("%d", &a);

    int num1 = a % 10;
    int num2 = (a / 10) % 10;
    int num3 = a / 100;
    sum = num1 + num2 + num3;
    
    printf("각 자리 숫자의 합은 %d\n", sum);
    return 0;
}

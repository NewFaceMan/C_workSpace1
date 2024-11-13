//두 개의 실수와 연산자를 전달하면 해당 연산의 결과를 반환하는 함수를 작성하고, main에서 연산 결과를 출력하시오.
// 단, 연산자는 +와 -만 사용한다.
#include <stdio.h>
double add(double, double);
double minus(double, double);

int main(int argc, char const *argv[])
{
    double num1, num2;
    char c;
    printf("두 개의 실수를 입력하세요: ");
    scanf("%lf %lf", &num1, &num2);
    printf("연산자를 입력하세요(+, - 둘 중에 하나만): ");
    scanf(" %c", &c);
    if (c == '+')
    {
    printf("num1 + num2 = %.2lf\n", add(num1, num2));    
    } else if (c == '-')
    {
    printf("num1 - num2 = %.2lf\n", minus(num1, num2));
    } else
    {
        printf("잘못 입력하셨습니다.\n");
    }
    
    return 0;
}
double add(double x, double y) {
    return x + y;
}
double minus(double x, double y) {
    return x - y;
}

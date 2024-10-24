//5. 두 정수를 입력받아 덧셈, 뺄셈, 곱셈, 나눗셈 결과를 각각 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("두 정수를 입력하세요 : ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    int minus = a - b;
    int multip = a * b;
    float division = (float) a / b;

    printf("덧셈 :  %d\n", sum);
    printf("뺄셈 : %d\n", minus);
    printf("곱셈 : %d\n", multip);
    printf("나눗셈 : %.1f\n", division);

    return 0;
}

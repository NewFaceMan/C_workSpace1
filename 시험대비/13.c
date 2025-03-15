// 문제 3: 포인터와 함수
// 다음 요구사항에 맞게 코드를 작성하시오.
// 	1.	두 정수를 입력받아, 두 정수의 합과 차를 포인터를 사용해 반환하는 함수를 작성하시오.
// 	2.	반환된 합과 차를 출력하시오.
#include <stdio.h>
void change(int a, int b, int *sum, int *minus);

int main(int argc, char const *argv[])
{
    int a, b;
    int sum = 0, minus = 0;
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    change(a, b, &sum, &minus);
    printf("두 정수의 합 : %d\n", sum);
    printf("두 정수의 차 : %d\n", minus);
    return 0;
}
void change(int a, int b, int *sum, int *minus)
{
    *sum = a + b;
    *minus = a - b;
}
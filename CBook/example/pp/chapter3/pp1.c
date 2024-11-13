#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c; //a = 국어, b = 영어, c = 수학
    int sum = 0; //총점
    float average = 0; //평균
    printf("국어 점수 : ");
    scanf("%d", &a);

    printf("영어 점수 : ");
    scanf("%d", &b);

    printf("수학 점수 : ");
    scanf("%d", &c);

    sum = a + b + c;
    average = sum / 3.0;
    printf("평균 : %.2f\n", average);

    return 0;
}

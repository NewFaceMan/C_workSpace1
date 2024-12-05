#include <stdio.h>
int MaxValue(int, int, int);

int main(int argc, char const *argv[])
{
    int num1 = 0, num2 = 0, num3 = 0;
    printf("세 정수를 입력하세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int finalMax = MaxValue(num1, num2, num3);
    printf("최댓값: %d\n", finalMax);
    return 0;
}


int MaxValue(int a, int b, int c) {
    int max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    return max;
}
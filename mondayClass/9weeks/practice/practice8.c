// main에서 두 개의 정수를 입력받고 두 정수의 합을 반환하는 함수를 만드시오.
// 그 뒤 두 정수의 합의 결과를 return 받아서 합에 5를 더한 결과를 main에서 출력하세요
#include <stdio.h>
int add(int, int);

int main(int argc, char const *argv[])
{
    int x, y;
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &x, &y);
    int sum = add(x, y);
    printf("두 정수의 합의 결과 + 5는 : %d\n", sum + 5);

    return 0;
}

int add(int x, int y) {
    return x + y;
}

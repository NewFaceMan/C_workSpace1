// main에서 두개의 정수 입력받고 두 정수의 합을 출력하는 함수를 작성
#include <stdio.h>
int add(int, int);
int main(int argc, char const *argv[])
{
    int x, y;
    printf("두 개의 정수를 입력하세요 : ");
    scanf("%d %d", &x, &y);
    printf("두 개의 합은 %d\n", add(x, y));
    return 0;
}

int add(int x, int y) {
    return x + y;
}

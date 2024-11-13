// 정수 하나 입력 후 조건에 따라 다음과 같이 출력
// 3과 4의 배수이면 '3과 4의 배수'
// 3의 배수이면 '3의 배수'
// 4의 배수이면 '4의 배수'
// 모두 아니면 '해당 없음'
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("정수를 입력하세요: ");
    scanf("%d", &x);

    if (x % 3 == 0 && x % 4 == 0)
        printf("3과 4의 배수\n");
    else if (x % 3 == 0)
        printf("3의 배수\n");
    else if (x % 4 == 0)
        printf("4의 배수\n");
    else 
        printf("해당 없음\n");

    return 0;
}

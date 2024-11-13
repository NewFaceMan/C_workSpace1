// 3제곱을 반환하는 함수를 만들고 main에서 정수값을 입력하여 3제곱값을 출력하시오.
// 단, 프로그램은 계속 반복하며 정수값이 0이면 종료입니다.
#include <stdio.h>
int cube(int);

int main(int argc, char const *argv[])
{
    do
    {
        int n;
        printf("정수를 입력하세요, 3제곱 값이 나옵니다: ");
        scanf("%d", &n);
        if (n == 0)
        {
            printf("프로그램을 종료합니다.\n");
            break;
        }
        
        printf("세 제곱 값은 : %d\n", cube(n));

    } while (1);
    
    return 0;
}
int cube(int x) {
    return x * x * x;
}

// for문을 활용해서 합계 구하기
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    int sum = 0;
    printf("정수를 입력하세요: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {
        if (x < 0 || x == 0) {
        printf("0 또는 음수를 입력하셨습니다. 프로그램을 종료합니다.");
        return 0;
        }
        sum += i;
    }
    printf("1부터 %d의 합계는 %d입니다.\n", x, sum);
    
    return 0;
}

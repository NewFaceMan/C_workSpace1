/*6.사용자가 입력한 정수 x에 대해, 1부터 x까지의 모든 정수의 합을 구하는 프로그램을 작성하시오. 
음수가 입력될 경우, 프로그램은 “음수가 입력되었습니다. 프로그램을 종료합니다.“라는 메시지를 출력하고 종료됩니다. 
(답안 : example5.c) */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    int sum = 0;
    while (1)
    {
    printf("정수를 입력해주세요. 1부터 입력한 정수까지 더해드립니다.\n");
    printf("만약 음수를 입력하신다면 프로그램이 종료됩니다. ");
    scanf("%d", &x);
    
    if (x<0)
    {
        printf("음수를 입력하셨습니다. 프로그램을 종료합니다.\n");
        return 0;
    }
    
    if (x == 0)
    {
        printf("0을 입력하셨습니다. 다시 입력해주세요.\n");
        continue;
    }
    
    sum = 0;

    for (int i = 1; i <= x; i++)
    {
        sum += i;
    }
    printf("1부터 %d까지의 합은 %d입니다.\n", x, sum);
}
    
    return 0;
}

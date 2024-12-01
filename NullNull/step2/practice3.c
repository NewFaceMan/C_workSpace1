#include <stdio.h>
int main(int argc, char const *argv[])
{
    int fee = 1000;
    int age = 0;

    scanf("%d", &age);
    if (age >= 20)
    {
        fee = 1000 * 1;
    }else if (age >= 14)
    {
        fee = 1000 * 0.75;
    }else if (age >= 4)
    {
        fee = 1000 * 0.5;
    }else if (age >= 0)
    {
        fee = 1000 * 0;
    }else
    {
        printf("잘못 입력하셨습니다. 다시 시도하세요.\n");
        return 0;
    }
    printf("나이 : %d세, 가격 : %d원\n", age, fee);
    return 0;
}

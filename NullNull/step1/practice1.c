#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num = 0;
    int a = 10;
    printf("정수를 입력하세요(초단위) : ");
    scanf("%d", &num);
    
    printf("%02d시간 %02d분 %02d초 입니다.\n", num / 3600, (num % 3600) / 60, num % 60);
    return 0;
}
    
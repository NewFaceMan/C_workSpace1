#include <stdio.h>
int main(int argc, char const *argv[])
{
    char a;
    printf("소문자 하나를 입력하세요:");
    scanf("%c", &a);

    for (char i = 'a'; i <= a; i++)
    {
        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
        {
            continue;
        }
        printf("%c", i);
    }
    printf("\n");
    return 0;
}
// 반복문 안에선 웬만하면 반복문 변수가 돌아가는 것을 유의할 것
// and조건과 or조건을 잘 사용할 것
// continue의 사용 방법을 익힐 것

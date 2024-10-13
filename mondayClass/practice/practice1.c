#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("정수를 입력하세요(입력하면 입력한 숫자 기준 밑으로 내려가면서 홀수만 출력될 겁니다.) :");
    scanf("%d", &x);

    if (!(x % 2)) x--;//만약 x가 짝수라면 x를 하나 줄여서 홀수로 만든다.

    for (int i = x; i > 0; i-=2) //int i는 x부터 시작하고, i가 0까지 돌게 한다. 한 번 돌고 i - 2를 해서 다시 i에 대입한다.
    {
        printf("%d\n", i); //i를 출력하는 것이다.
        printf("Hello World");
    }
    return 0;
}

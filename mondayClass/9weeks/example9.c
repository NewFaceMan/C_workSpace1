#include <stdio.h> //입출력
int main(void)
{
    char ch;
    printf("input 1");
    ch = getche(); //맥에선 적용 안 됨.
    printf("out: %c", ch);

    return 0;
}
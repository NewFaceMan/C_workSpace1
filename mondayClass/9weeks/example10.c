#include <stdio.h> //문자열 gets, puts
int main(void)
{
    char ch[20];
    printf("input 1: ");
    fgets(ch, sizeof(ch), stdin);
    printf("%s", ch);
    puts(ch);
    puts(ch);
    return 0;
}
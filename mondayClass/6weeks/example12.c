#include <stdio.h>
int main(int argc, char const *argv[])
{
    char c;
    char start;
    printf("문자 하나를 입력하세요: ");
    
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z') {
        start = 'a';
    } else
    {
        start = 'A';
    }

    for ( int i = 'a'; i <= c; i++)
    {
        printf("%c ", i);
    }
    
    return 0;
}

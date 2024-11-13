#include <stdio.h>
int main(void)
{
    char ch;
    printf("input 1");
    ch = getchar(); getchar();
    printf("%c", ch);
    printf("input 2");
    ch = getchar(); 
    printf("%c", ch);

    return 0;
}
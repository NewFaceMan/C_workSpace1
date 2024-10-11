#include <stdio.h>
int main()
{
    char a;
    printf("문자 하나 입력하세요.\n");
    scanf("%c", &a);
    if (a >= 'A' && a<= 'Z')
    {
        a = a + 32;
        printf("%c\n", a);
    } else
    {
        a = a - 32;
        printf("%c\n", a);
    }
    
    
    return 0;
}

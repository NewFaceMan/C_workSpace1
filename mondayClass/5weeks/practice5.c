#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("두 개의 정수를 입력하세요.\n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d", a - b);
    } else
    {
        printf("%d", a + b);
    }
    
    
    return 0;
}

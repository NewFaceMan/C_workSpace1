#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a; //입력받을 값
    while (1)
    {
        printf("정수를 입력하세요:");
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            printf("짝수를 입력했군요.\n");
        } else printf("홀수를 입력했군요.\n");
        
    }
    
    return 0;
}

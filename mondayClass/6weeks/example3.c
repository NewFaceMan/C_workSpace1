#include <stdio.h>
int main(int argc, char const *argv[])
{
    char a;
    printf("등급을 입력하세요: ");
    scanf("%c", &a);
    switch (a)
    {
    case 'A':
        printf("최우수\n");
        break;
    
    case 'B':
        printf("우수\n");
        break;
    
    case 'C':
        printf("보통\n");
        break;
    
    case 'D':
        printf("미흡\n");
        break;
    
    case 'F':
        printf("탈락\n");
        break;
    
    default:
        printf("다시 입력하세요.\n");
        break;

    }
    return 0;
}

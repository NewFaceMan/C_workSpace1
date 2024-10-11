#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;

    printf("A, B, C 키 중 하나를 누르고 Enter를 누르세요 : ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case 'a':
    case 'A':
        printf("A 키를 눌렀습니다. \n");
        break;
    
    case 'b':
    case 'B':
        printf("B 키를 눌렀습니다. \n");
        break;
    
    case 'c':
    case 'C':
        printf("C 키를 눌렀습니다. \n");
        break;
    
    default: 
        printf("잘못 눌렀습니다. \n");
        break;
    }
    return 0;
}

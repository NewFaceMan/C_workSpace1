#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("원하는 메뉴를 선택하세요: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("삼각형의 넓이\n");
        break;
    
    case 2:
        printf("원의 넓이\n");
        break;

    case 3: 
        printf("사각형의 넓이\n");
        break;
        
    default:
        printf("다시 선택하세요!!\n");
        break;
    }
    return 0;
}

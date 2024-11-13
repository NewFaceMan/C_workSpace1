/* 10.사용자가 입력한 크기와 문자로 테두리가 있는 정사각형을 출력하는 프로그램을 작성하시오. 
테두리는 사용자가 입력한 문자로 채워지며, 정사각형의 내부는 공백으로 채웁니다. (답안 : example9.c) */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    char ch;
    printf("크기를 입력하세요: ");
    scanf("%d", &x);
    printf("문자를 입력하세요: ");
    scanf(" %c", &ch);

    for (int i = 0; i < x; i++) //행
    {
        for (int j = 0; j < x ; j++) //열
        {
            if (i == 0 || i == x -1 || j == 0 || j == x -1)
            {
            printf("%c", ch);
            } else
            {
                printf(" ");
            }
    }
        printf("\n");
    }
    return 0;
}

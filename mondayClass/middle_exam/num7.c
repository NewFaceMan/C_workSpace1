/* 8.사용자로부터 문자를 반복적으로 입력받아, 소문자 모음(a, e, i, o, u)이 입력될 때마다 모음의 개수를 카운트하는 프로그램을 작성하시오. 
만약 사용자가 ‘0’을 입력하면 프로그램을 종료하고, 그동안 입력된 모음의 총 개수를 출력합니다. */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    int count = 0;
    while (1)
    {
        printf("문자를 입력하세요: ");
        scanf(" %c", &ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count += 1;
        }
        if (ch == '0')
        {
            printf("프로그램을 종료합니다.\n");
            printf("총 모음 개수 : %d\n", count);
            return 0;
        }
        printf("현재 모음의 갯수 : %d\n", count);
        
        
    }
    
    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    
    printf("알파벳 입력: ");
    scanf("%c", &ch);
    
    printf("입력한 알파벳 : %c\n", ch);
    printf("알파벳 아스키코드값 : %d\n", ch);
    printf("입력한 알파벳 + 8 = %c\n", ch + 8);
    printf("프로그램을 종료합니다.\n");
    return 0;
}

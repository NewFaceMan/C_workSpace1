//5개의 문자를 각각 ch 배열에 입력 받고 puts()로 출력하시오.
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char ch[6];
    printf("5개의 문자를 입력하세요:");
    fgets(ch, sizeof(ch), stdin);
    for (int i = 0; i < 5; i++)
    {
        ch[i] = getchar(); 
    }
    ch[5] = '\0';
    puts(ch);

    return 0;
}

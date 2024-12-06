// 문자열을 입력받고 거꾸로 출력하기 (%s를 사용해서)
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char ss[20];
    char reverse[20];
    printf("문자열을 입력하세요: ");
    scanf("%s", ss);
    int length = strlen(ss);
    for (int i = length - 1; i >= 0; i--)
    {
        reverse[i] = ss[length-(i+1)];
    }
    reverse[length] = '\0';
    
    printf("%s", reverse);
    printf("\n");
    return 0;
}

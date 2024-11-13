// 입력된 영문자나 숫자를 for문을 사용하여 반대 순서로 출력하는 프로그램
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[100];
    int str_cnt;

    printf("영문자 및 숫자를 입력 (100자 이하) : ");
    scanf("%s", str);
    
    printf("입력한 문자열 ==> %s\n", str);
    printf("변환된 문자열 ==> ");
    str_cnt = strlen(str);

    for (int i = str_cnt; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

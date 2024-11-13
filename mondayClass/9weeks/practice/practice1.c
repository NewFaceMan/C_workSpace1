//공백이 있는 문자열을 a배열에 입력받고, b 배열에 동일한 내용을 복사후 출력하시오
#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[20];
    char b[20];
    printf("공백이 있는 문자열을 입력하세요:");
    fgets(a, sizeof(a), stdin);
    strcpy(b, a);
    printf("복사된 문자열: ");
    puts(b);

    return 0;
}
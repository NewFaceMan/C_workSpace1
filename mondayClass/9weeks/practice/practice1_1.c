////공백이 있는 문자열을 a배열에 입력받고, b 배열에 동일한 내용을 복사후 출력하시오 (strcpy 쓰지 않는 버전)
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char a[20], b[20];
    int i;
    printf("input 1 : ");
    fgets(a, sizeof(a), stdin);
    for ( i = 0; i < sizeof(a); i++)
    {
        b[i] = a[i];
        if (a[i] == '\0')
        {
            break;
        }
    }
    puts(b);
    
    return 0;
}

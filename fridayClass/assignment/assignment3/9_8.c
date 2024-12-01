#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char ary[25] = "IT 1234 @$% CookBook";
    char *p;
    int i;
    p = ary; //p에 ary 배열의 주소값 대입
    int diff = 'a' - 'A'; // 아스키코드 97 - 65 = 32 (대문자 변환 변수)
    int length = strlen(p);

    for (int i = sizeof(ary) - 2; i >= 0; i--)
    {
        if (p[i] >= 'a' && p[i] <= 'z')
        {
            p[i] -= diff;
        }
        else if (p[i] >= 'A' && p[i] <= 'Z')
        {
            p[i] += diff;
        }
    }

    for (int i = length - 1; i >= 0; i--)
    {
    printf("%c", p[i]);    
    }
    printf("\n");
    return 0;
}

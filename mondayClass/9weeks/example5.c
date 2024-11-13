#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char ss [7];
    char tt [7];

    printf("문자열을 입력하세요: ");
    scanf("%6s", ss);

    int p = strlen(ss);
    for (int i = 0 ; i < p; i++)
    {
        tt[i] = ss[p - i - 1]; //ss[p] : null 문자에 해당함.
    }
    tt[p] = '\0';

    printf("거꾸로 출력한 결과: %s \n", tt);
    
    return 0;
}

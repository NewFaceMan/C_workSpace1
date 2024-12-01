#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ary[4];
    int hap = 0;
    int i;

    for ( i = 0; i <= 3; i++)
    {
        printf("%d번째 숫자를 입력하세요 : ", i + 1);
        scanf("%d", &ary[i]);
    }
    for ( i = 3; i > 0; i--)
    {
        hap += ary[i];
    }
    printf(" 합계 ==> %d\n", hap);
    
    
    return 0;
}

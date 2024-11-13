//for문과 if문을 사용하여 아스키코드의 0~127을 10진수, 16진수, 문자로 출력하는 프로그램
#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 128; i++)
    {
        if (i % 16 == 0)
        {
            printf("\n");
            printf("--------------------\n");
            printf("10진수\t16진수\t문자\n");
            printf("--------------------\n");
        }
        printf("%d\t%x\t%c\n", i, i, i);
        
    }
    
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str [7];
    int p;
    printf("문자열을 입력하세요 : ");
    scanf("%s", str);

    p = strlen(str);

    for (int i = p - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[100];
    char oldChar;
    char newChar;

    printf("여러 글자를 입력: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    printf("기존 문자와 새로운 문자 : ");
    scanf(" %c %c", &oldChar, &newChar);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == oldChar)
        {
            str[i] = newChar;
        }
    }
    
    for (int i = length - 1 ; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}

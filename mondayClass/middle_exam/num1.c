#include <stdio.h>
int main(int argc, char const *argv[])
{
    char input;
    printf("소문자 또는 대문자 알파벳 하나를 입력하세요.");
    scanf("%c", &input);

    if (input >= 'a' && input <= 'z') 
    {
        for (char i = 'a'; i <= input; i++)
        {
            printf("%c ", i);
        }
        
    } else if (input >= 'A' && input <= 'Z')
    {
        for (char i = 'A'; i <= input; i++)
        {
            printf("%c ", i);
        }
        
    }
    
    
    return 0;
}

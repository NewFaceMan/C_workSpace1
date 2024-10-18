#include <stdio.h>
int main(int argc, char const *argv[])
{
    char c;
    int count;
    while (1)
    {
        printf("문자를 입력하세요: ");
        scanf("%c", &c);
        if (c == '0')
        {
            break;
        }
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count += 1;
        }
        
    }
    
    return 0;
}

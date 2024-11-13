//입력한 문자열에 대문자와 소문자, 숫자가 각각 몇 개 입력되었는지 세는 프로그램이다.
//그 외는 무시한다.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str[100];
    int number_count = 0;
    int upper_count = 0;
    int lower_count = 0;

    printf("문자열을 입력(100자 이내) :");
    scanf("%s", str);
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            number_count++;
        }
        
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            lower_count++;
        }
        
        if (str[i] >= 'A' && str[i]<= 'Z')
        {
            upper_count++;
        }
    }
    printf("대문자 %d개, 소문자 %d개, 숫자 %d개\n", upper_count, lower_count, number_count);
    return 0;
}

//입력한 숫자만큼의 별 모양을 출력하는 프로그램이다. 예를들어 5914를 입력하면 각 줄에 별을 5개, 9개, 1개, 4개를 출력하는 식이다.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str[100];
    printf("숫자를 여러개 입력: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        int num = str[i] - '0';
        for (int j = 0; j < num; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

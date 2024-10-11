#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    char a;
    printf("몇 개를 출력할까요? \n");
    scanf("%d", &n);
    printf("출력할 문자를 적어주세요: \n");
    scanf(" %c", &a);

    for (int i = 0; i < n; i++)
    {
        printf("%c ", a);
    }
    
    return 0;
}

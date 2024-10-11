#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int r;
    char a;
    printf("몇 개를 출력할까요? : ");
    scanf("%d", &n);
    printf("몇 줄을 출력할까요? : ");
    scanf(" %d", &r);
    printf("어떤 문자를 출력할까요? : ");
    scanf(" %c", &a);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c ", a);
        }
        printf("\n");
    }
    
    return 0;
}

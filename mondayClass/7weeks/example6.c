#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int a;
    int answer;
    char c;
    while (1)
    {
    printf("정수를 입력하세요: ");
    scanf("%d", &a);

    answer = pow(a, 3);
    printf("%d\n", answer);

    printf("계속하시겠습니까? (y/n) : ");
    scanf(" %c", &c);

    switch (c)
    {
    case 'y':
        continue;
    
    case 'n':
        break;
    default:
        printf("y/n 외에 다른 문자는 입력할 수 없습니다. \n");
        continue;
    }
    

    }
    

    return 0;
}

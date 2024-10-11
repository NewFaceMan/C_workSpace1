#include <stdio.h>
int main()
{
    int a, b;
    printf("두 개의 정수를 입력하세요 \n");
    scanf("%d %d", &a, &b);
    a > b ? printf("%d\n", a - b) : printf("%d \n", a + b);
    return 0; 
}

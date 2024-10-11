#if 0
#include <stdio.h>

int main() {
    int a, b;
    int result;

    scanf("%d", &a);
    scanf("%d", &b);

    result = a + b;

    printf("%d + %d = %d \n", a, b, result);
    return 0;
}
#endif
#if 1
#include <stdio.h>

int main() 
{
    int a;
    int b;
    int result;

    printf("첫 번째 계산 값을 입력하세요 ==> ");
    scanf("%d", &a);
    
    printf("두 번째 계산 값을 입력하세요 ==> ");
    scanf("%d", &b);

    result = a + b;

    printf("%d + %d = %d \n", a, b, result);
    return 0;
}
#endif

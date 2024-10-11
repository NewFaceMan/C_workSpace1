#if 0
#include <stdio.h>
// 예제 2-2
int main() {
    int a, b;
    int result;

    a = 100;
    b = 50;

    result = a + b;
    printf("%d + %d = %d \n", a, b, result);

    result = a - b;
    printf("%d - %d = %d \n", a, b, result);
    # endif
    
    #include <stdio.h>
    int main() {
        int a, b;
        int result;

    a = 100;
    b = 50;

    #if 1
    result = a * b;
    printf("%d * %d = %d \n", a, b, result);
    #endif
    
    result = a / b;
    printf("%d / %d = %d \n", a, b, result);
}









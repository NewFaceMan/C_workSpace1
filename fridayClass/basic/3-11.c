#include <stdio.h>

int main() {
    float a = 0.1234567890123456789012345;
    double b = 0.1234567890123456789012345;

    printf("%30.25f \n", a);
    printf("%30.25lf \n", b);

    return 0;
}
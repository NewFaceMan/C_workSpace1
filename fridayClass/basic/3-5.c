#include <stdio.h>

int main() {
    printf("%d\n", 123);
    printf("%5d\n", 123);
    printf("%05d\n", 123);

    printf("%f\n", 123.45);
    printf("%7.1f\n", 123.45);
    printf("%7.3f\n", 123.45);

    printf("%s\n", "Basic-C");
    printf("%10s\n", "Basic-C");

    return 0;
}
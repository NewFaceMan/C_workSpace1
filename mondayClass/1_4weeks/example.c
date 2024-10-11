#include <stdio.h>

int main() {
    printf("int 사이즈 : %zu \n", sizeof(int));
    printf("long 사이즈 : %zu \n", sizeof(long));
    printf("short 사이즈 : %zu \n", sizeof(short));
    printf("long long 사이즈 : %zu \n", sizeof(long long));
    printf("---------------------------- \n");

    printf("float 사이즈 : %zu \n", sizeof(float));
    printf("double 사이즈 : %zu \n", sizeof(double));
    printf("long double 사이즈 : %zu \n", sizeof(long double));
    printf("---------------------------- \n");

    printf("char 사이즈 : %zu \n", sizeof(char));
    
    return 0;
} 
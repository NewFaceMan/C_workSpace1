#include <stdio.h>
int plus(int, int);

int main(int argc, char const *argv[])
{
    int result;
    result = plus(3, 4);
    printf("%d\n", result);
    
    return 0;
}

int plus(int a, int b) {
    return a + b;
}

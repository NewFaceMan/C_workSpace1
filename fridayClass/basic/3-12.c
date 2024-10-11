#include <stdio.h>

int main(void) {
    char a, b, c;

    a = 'A';

    printf("%c \n", a);
    printf("%d \n", a);
    
    b = a + 44;
    printf("%c \n", b);

    c = b + 13;
    printf("%c \n", c);
}
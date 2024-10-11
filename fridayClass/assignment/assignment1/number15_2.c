#include <stdio.h>

int main() {
    // Code here
    int a = 0x41, b = 0x61;

    int tol;
    tol = b - a;
    
    printf("%c를 소문자로 표시하면 %c이며 \n", 'K', 'K' + tol);
    printf("%c를 대문자로 표시하면 %c이며 \n", 'z', 'z' - tol);
    
    return 0;
}
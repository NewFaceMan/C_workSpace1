#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 0x9;
    int b = 0x6;
    int b_1 = ~ b + 1;
    printf("%d\n", b_1 + a);

    
    return 0;
}

#include <stdio.h>
#include "addFuc.h"
int main(int argc, char const *argv[])
{
    int x = 10, y = 10;
    int sum = 0;
    sum = Add(x, y);
    printf("%d", sum);
    return 0;
}

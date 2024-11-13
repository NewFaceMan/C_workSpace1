#include <stdio.h>
int main(int argc, char const *argv[])
{
    int aa[] = {10, 20, 30, 40, 50};
    int p;

    p = sizeof(aa);
    printf("%d", p);
    return 0;
}

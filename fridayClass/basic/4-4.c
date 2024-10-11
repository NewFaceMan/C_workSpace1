#if 0
#include <stdio.h>
int main() {
    int a = 10, b;
    b = a++;
    printf("%d\n", a);
    printf("%d\n", b);

    b = ++a;
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}
#endif
#include <stdio.h>

int main() {
    int a = 100, b = 200;
    printf("AND 연산 : %d \n", a&&b);
    return 0;
}

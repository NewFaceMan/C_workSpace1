//매개변수 전달 방법 : 값으로 전달
#include <stdio.h>
void func1(char *a, char *b);
int main(int argc, char const *argv[])
{
    char x = 'A', y = 'Z';
    printf("원래 값: x = %c, y = %c\n", x, y);
    func1(&x, &y);
    printf("값을 전달한 후: x = %c, y = %c\n", x, y);
    return 0;
}

void func1(char *a, char *b) {
    int imsi;
    imsi = *a;
    *a = *b;
    *b = imsi;
}
#include <stdio.h>
int main() {
    int a;
    printf("값을 입력하세요: ");
    scanf("%d", &a);

    if (a == 100)
        printf("100입니다 \n");
    else
        printf("100이 아닙니다.\n");
}
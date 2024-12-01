#include <stdio.h>
int main(int argc, char const *argv[])
{
    int temp;
    int sum = 0;
    scanf("%d", &temp);
    sum += temp;
    scanf(" %d", &temp);
    sum += temp;
    scanf(" %d", &temp);
    sum += temp;
    printf("Total : %d\n", sum);
    return 0;
}

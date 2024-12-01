#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input = 0;
    int max = 0;
    scanf("%d", &input);
    max = input;

    scanf(" %d", &input);
    max = (max > input) ? max : input;

    scanf(" %d", &input);
    max = (max > input) ? max : input;

    printf("Max : %d\n", max);

    return 0;
}

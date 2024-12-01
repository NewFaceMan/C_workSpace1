#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input , max = 0;
    scanf("%d", &input);
    max = input;
    scanf(" %d", &input);
    if (input > max)
        max = input;
    scanf(" %d", &input);
    if (input > max)
        max = input;
    
    printf("Max : %d\n", max);
    
    return 0;
}

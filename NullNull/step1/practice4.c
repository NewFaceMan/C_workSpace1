#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input = 0;
    scanf("%d", &input);
    printf("%s\n", (input >= 80)? "합격" : "불합격");
    return 0;
}

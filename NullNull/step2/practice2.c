#include <stdio.h>
int main(int argc, char const *argv[])
{
    int fee = 1000;
    int age = 0;

    scanf("%d", &age);
    if (age < 20)
        printf("나이 : %d, 최종요금 : %.0f원\n", age, fee * 0.75);
    if (age >= 20)
        printf("나이 : 20, 최종요금 : %d원\n", fee);

    return 0;
}

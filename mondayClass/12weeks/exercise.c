#include <stdio.h>
struct data
{
    char name [20];
    int age;
    double height;
};

int main(int argc, char const *argv[])
{
    struct data information = {"박상우", 26, 183};
    printf("이름 : %s, 나이 : %d, 키 : %.1lf\n", information.name, information.age, information.height);
    return 0;
}

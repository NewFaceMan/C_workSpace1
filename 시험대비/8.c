#include <stdio.h>
void printInfo(char [], int);

int main(int argc, char const *argv[])
{
    char name[50];
    int age = 0;
    printf("이름과 나이를 입력하세요 : ");
    scanf("%s %d", name, &age);
    printInfo(name, age);
    return 0;
}

void printInfo(char name[], int age)
{
    printf("이름 : %s, 나이 : %d\n", name, age);
}
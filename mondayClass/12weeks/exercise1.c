#include <stdio.h>
typedef struct data
{
    char name [20];
    int age;
    double height;
}DATA;

int main(int argc, char const *argv[])
{
    DATA person;
    person.age = 0;
    person.height = 0.0;
    printf("이름, 나이(정수), 키(실수)를 입력하세요: ");
    fgets(person.name, sizeof(person.name), stdin);
    scanf(" %d %lf", &person.age, &person.height);

    printf("나이 : %d, 키 : %.1lf\n", person.age, person.height);
}

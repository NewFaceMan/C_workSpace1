#include <stdio.h>
int main(int argc, char const *argv[])
{
    struct student
    {
        char name[10];
        int kor;
        int eng;
        float avg;
    };

    struct student s1;
    printf("이름: ");
    scanf("%s", &s1.name);

    printf("\n국어점수:");
    scanf(" %d", &s1.kor);

    printf("\n영어점수:");
    scanf(" %d", &s1.eng);

    s1.avg = (float)(s1.kor + s1.eng / 2);
    printf("학생 이름: %s\n", s1.name);
    printf("국어 점수: %d\n", s1.kor);
    printf("영어 점수: %d\n", s1.eng);
    printf("평균 점수: %.1f\n", s1.avg);
    
    return 0;
}

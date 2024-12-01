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

    struct student students[5]; // 5명의 학생 정보를 저장할 배열
    for (int i = 0; i < 5; i++) // 5명을 입력받기 위한 반복문
    {
        printf("학생 %d의 이름: ", i + 1);
        scanf("%s", students[i].name);

        printf("국어 점수: ");
        scanf("%d", &students[i].kor);

        printf("영어 점수: ");
        scanf("%d", &students[i].eng);

        // 평균 계산
        students[i].avg = (float)(students[i].kor + students[i].eng) / 2;

        printf("\n");
    }

    // 입력한 정보를 출력
    printf("학생 정보 출력:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("학생 %d의 이름: %s\n", i + 1, students[i].name);
        printf("국어 점수: %d\n", students[i].kor);
        printf("영어 점수: %d\n", students[i].eng);
        printf("평균 점수: %.1f\n", students[i].avg);
        printf("\n");
    }

    return 0;
}
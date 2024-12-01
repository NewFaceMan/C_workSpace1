//응시자 관리 프로그램
// 응시자 데이터 : 이름, 점수, 합격여부(저장값:pass, fail)
// 5명의 데이터를 처리
// 이름과 점수를 입력하면 합격여부 저장(70점이상 합격)
// 합격자를 출력
#include <stdio.h>
#include <string.h>

// 데이터 구조체 정의
typedef struct data
{
    char name[20];
    int score;
    char result[5];
} DATA;

int main(int argc, char const *argv[])
{
    DATA persons[5]; // 응시자 배열 선언

    // 데이터 입력 및 합격 여부 결정
    for (int i = 0; i < 5; i++) {
        printf("응시자 %d의 이름과 점수를 입력하세요: ", i + 1);
        scanf("%s %d", persons[i].name, &persons[i].score);

        if (persons[i].score >= 70) {
            strcpy(persons[i].result, "pass");
        } else {
            strcpy(persons[i].result, "fail");
        }
    }

    // 합격자 출력
    printf("\n합격자 목록:\n");
    for (int i = 0; i < 5; i++) {
        if (strcmp(persons[i].result, "pass") == 0) {
            printf("이름: %s, 점수: %d\n", persons[i].name, persons[i].score);
        }
    }

    return 0;
}
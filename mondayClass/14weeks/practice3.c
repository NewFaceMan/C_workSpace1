#include <stdio.h>

// 구조체 정의
typedef struct {
    char name[30];   // 이름
    int age;         // 나이
    float height;    // 키
} Person;

// 데이터를 파일에 저장하는 함수
void save_to_file(const char *filename, Person *persons, int count) {
    FILE *fp = fopen(filename, "w"); // 파일 쓰기 모드로 열기
    if (fp == NULL) {
        printf("파일 열기 실패!\n");
        return; // 함수 종료
    }
    for (int i = 0; i < count; i++) {
        fprintf(fp, "%s %d %.1f\n", persons[i].name, persons[i].age, persons[i].height);
    }
    fclose(fp); // 파일 닫기
}

// 파일에서 데이터를 읽는 함수
int load_from_file(const char *filename, Person *persons) {
    FILE *fp = fopen(filename, "r"); // 파일 읽기 모드로 열기
    if (fp == NULL) {
        printf("파일 열기 실패!\n");
        return 0; // 데이터 없음
    }
    int count = 0;
    while (fscanf(fp, "%s %d %f", persons[count].name, &persons[count].age, &persons[count].height) == 3) {
        count++; // 한 사람 추가
    }
    fclose(fp); // 파일 닫기
    return count; // 읽은 사람 수 반환
}

// 데이터를 출력하는 함수
void print_persons(Person *persons, int count) {
    for (int i = 0; i < count; i++) {
        printf("이름: %s, 나이: %d, 키: %.1f\n", persons[i].name, persons[i].age, persons[i].height);
    }
}

// 새로운 사람 정보를 입력받는 함수
Person input_new_person() {
    Person new_person;
    printf("새로운 사람의 정보를 입력하세요:\n");
    printf("이름: ");
    scanf("%s", new_person.name);
    printf("나이: ");
    scanf("%d", &new_person.age);
    printf("키: ");
    scanf("%f", &new_person.height);
    return new_person;
}

int main() {
    const char *filename = "data.txt"; // 저장할 파일 이름
    Person persons[4]; // 최대 4명의 사람을 저장할 배열

    // 초기 데이터 정의
    persons[0] = (Person){"홍길동", 20, 170.5};
    persons[1] = (Person){"김영희", 22, 165.0};

    // 2명의 데이터를 파일에 저장
    save_to_file(filename, persons, 2);

    // 파일에서 데이터 읽기
    int count = load_from_file(filename, persons);

    // 새로운 사람 추가 입력 받기
    persons[count++] = input_new_person();

    // 3명의 데이터를 다시 파일에 저장
    save_to_file(filename, persons, count);

    // 모든 데이터를 출력
    printf("파일에 저장된 데이터:\n");
    print_persons(persons, count);

    return 0;
}
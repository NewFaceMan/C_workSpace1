// ctrl + z (mac : ctrl + D) 가 입력될 때까지 영문자를 입력, 입력된 문자에서 'a의 개수를 출력
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int capacity = 1; // 초기 메모리 크기
    int size = 0;      // 입력된 문자의 개수
    int count = 0;     // 'a'의 개수
    char *buffer = (char *)malloc(capacity * sizeof(char)); // 초기 메모리 할당
    char c;

    if (buffer == NULL) {
        printf("메모리 할당 실패!\n");
        return 1;
    }

    printf("영문자를 입력하세요 (Windows: Ctrl + Z, Mac: Ctrl + D로 종료):\n");

    // 입력 반복
    while ((c = getchar()) != EOF) { // E0F : ctrl + D
        if (size >= capacity) { // 현재 메모리 크기를 초과하면 재할당
            capacity *= 2;
            buffer = (char *)realloc(buffer, capacity * sizeof(char));
            if (buffer == NULL) {
                printf("메모리 재할당 실패!\n");
                return 1;
            }
        }
        buffer[size++] = c; // 입력된 문자 저장
    }

    // 'a'의 개수 세기
    for (int i = 0; i < size; i++) {
        if (buffer[i] == 'a') {
            count++;
        }
    }

    printf("'a'의 개수: %d\n", count);

    // 메모리 해제
    free(buffer);

    return 0;
}
#include <stdio.h>

int main() {
    int n;
    char ch;

    // 크기와 문자를 입력받음
    printf("사각형의 크기를 입력하세요: ");
    scanf("%d", &n);
    printf("사용할 문자를 입력하세요: ");
    scanf(" %c", &ch);

    // 사각형 그리기
    for (int i = 0; i < n; i++) { //행
        for (int j = 0; j < n; j++) { //열
            // 테두리일 때만 문자를 출력
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) { //첫 번째 행 or 마지막 -1 행 or 첫 번째 열 or 마지막 -1 열
                printf("%c ", ch);
            } else {
                printf("  ");  // 가운데는 공백으로 채우기
            }
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int choice;
    float usage, total;
    float a = 400.0; // 전기 요금 (kw당)
    float b = 210.0; // 수도 요금 (L당)
    float c = 0.07; // 전기 누진세 7%
    float d = 0.06; // 수도 누진세 6%

    do {
        printf("1. 전기\n");
        printf("2. 수도\n");
        printf("3. 종료\n");
        printf("메뉴를 선택하세요: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("사용한 전기량(kW)을 입력하세요: ");
            scanf("%f", &usage);
            total = usage * a;
            total += total * c; // 누진세 적용
            printf("전기 요금: %.2f원\n", total);
        } 
        else if (choice == 2) {
            printf("사용한 수도량(L)을 입력하세요: ");
            scanf("%f", &usage);
            total = usage * b;
            total += total * d; // 누진세 적용
            printf("수도 요금: %.2f원\n", total);
        } 
        else if (choice == 3) {
            printf("프로그램을 종료합니다.\n");
        } 
        else {
            printf("잘못된 선택입니다. 다시 선택하세요.\n");
        }
    } while (choice != 3);

    return 0;
}
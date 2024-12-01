#include <stdio.h>

int main() {
    // 공용체 student를 선언
    union student {
        int tot;   // 총점
        char grade; // 등급
    };

    // 공용체 변수 u 선언
    union student u ;

    // 공용체 멤버 변수에 값 대입
    u.tot = 300;
    u.grade = 'A'; 

    // 공용체 활용 결과 출력
    printf("\n--- 공용체 활용 ---\n");
    printf("총점 => %d\n", u.tot);
    printf("등급 => %c\n", u.grade);

    return 0;
}
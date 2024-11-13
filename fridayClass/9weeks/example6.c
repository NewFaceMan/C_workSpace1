#include <stdio.h>

// 함수 프로토타입 선언
void f1(int);      // int형 값을 매개변수로 받는 함수
void f2(int *);    // int형 포인터를 매개변수로 받는 함수

int main(int argc, char const *argv[])
{
    int a = 100;       // 변수 'a'를 선언하고 100으로 초기화

    f1(a);             // 'a'의 값을 복사해서 f1 함수에 전달 (값에 의한 전달)
    printf("%d\n", a); // f1 함수 호출 후 'a'의 값을 출력 (값이 변경되지 않음)

    f2(&a);            // 'a'의 주소를 f2 함수에 전달 (주소에 의한 전달)
    printf("%d\n", a); // f2 함수 호출 후 'a'의 값을 출력 (값이 변경됨)

    return 0;          // 프로그램 종료
}

void f1(int a) {
    a = 200;            // 매개변수 'a'의 값을 200으로 변경 (main의 'a'에는 영향 없음)
    printf("%d\n", a);  // 변경된 'a'의 값을 출력
}

void f2(int *p) {
    *p = 200;           // 포인터 'p'가 가리키는 값을 200으로 변경 (main의 'a'에 영향 줌)
    printf("%d\n", *p); // 변경된 값을 출력
}
#include <stdio.h>  // 표준 입출력 라이브러리 포함

int main(int argc, char const *argv[])
{
    char s[8] = "Basic-C";  // 문자 배열 s를 선언하고 문자열 "Basic-C"로 초기화
    char *p;  // 문자형 포인터 변수 p를 선언

    p = s;  // 포인터 p에 배열 s의 시작 주소를 대입

    printf("&s[3] => %s\n", &s[3]);  // 배열 s의 네 번째 요소(s[3])의 값를 출력
    printf("p+3 ==> %s\n\n", p + 3);  // 포인터 p를 세 칸 이동한 위치에서 시작하는 문자열을 출력

    printf("s[3] => %c\n", s[3]);  // 배열 s의 네 번째 요소, 즉 문자 'i'를 출력
    printf("*(p+3) => %c\n", *(p+3));  // 포인터 p를 세 칸 이동한 위치의 값을 출력, 여기서는 문자 'i'

    return 0;
}
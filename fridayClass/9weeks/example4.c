#include <stdio.h>

int main(int argc, char const *argv[])
{
    // ch 배열에 "Basic-C" 문자열을 저장 (마지막 '\0' 포함하여 크기는 8)
    char ch[8] = "Basic-C";  
    // 포인터 p를 ch 배열의 시작 주소로 초기화
    char *p;

    p = ch;  // 포인터 p가 ch 배열의 시작 주소를 가리키도록 설정

    // 배열 ch를 역순으로 출력하기 위해 반복문 설정
    // sizeof(ch) - 2부터 시작하여 0까지 감소
    // sizeof(ch) - 1은 '\0'의 위치이므로 그 전부터 시작
    for (int i = sizeof(ch) - 2; i >= 0; i--)
    {
        // p + i 위치의 문자를 출력 (역순으로 배열 요소를 접근)
        printf("%c", *(p + i));
    }
    
    // 마지막 줄바꿈 출력
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // 문자열 초기화
    char s[40] = "ITCookBookHanbitNetwork";
    char *p = s; // 포인터 p를 s 문자열의 시작 주소로 초기화
    int length = strlen(p); // 문자열의 길이를 계산

    // 정렬 전 문자열 출력
    printf("정렬 전 문자열 : ==> %s\n", p);

    // 버블 정렬을 사용하여 문자열을 내림차순으로 정렬
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i; j++) // 각 정렬 단계에서 마지막 요소는 비교하지 않음
        {
            // 현재 문자(p[j])가 다음 문자(p[j+1])보다 작을 경우 (즉, 아스키코드 값이 작을 경우)
            if (p[j] < p[j+1])
            {
                // 두 문자의 위치를 교환하여 내림차순으로 정렬
                char temp = p[j]; // temp 변수에 현재 문자를 임시로 저장
                p[j] = p[j+1]; // 현재 위치에 다음 문자를 저장
                p[j+1] = temp; // 다음 위치에 임시 저장한 문자를 삽입
            }
        }
    }
    
    // 정렬 후 문자열 출력
    printf("정렬 후 문자열 : ==> %s\n", p);
    
    return 0;
}
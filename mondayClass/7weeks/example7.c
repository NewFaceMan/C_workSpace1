#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    int count = 0;  // 초기화 추가

    while (1)
    {
        printf("문자를 입력하세요: ");
        scanf(" %c", &c);  // 앞에 공백 추가 (개행 문자 처리)

        if (c == '0')  // 입력된 문자가 '0'이면 종료
        {
            break;
        }

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count += 1;  // 모음일 때 카운트 증가
        }
    }

    printf("입력된 모음의 개수: %d\n", count);  // 최종 모음 개수 출력
    return 0;
}
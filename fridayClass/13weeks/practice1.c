#include <stdio.h>

int main(int argc, char const *argv[])
{
    char data[3][10]; // 3개의 문자열, 각 문자열 최대 9자 + '\0'
    int i;

    // 입력
    for (i = 0; i < 3; i++)
    {
        printf("%d 번째 문자열: ", i + 1);
        fgets(data[i], sizeof(data[i]), stdin); // 각 행의 크기 사용
    }

    // 출력
    printf("\n - 입력과 반대로 출력 (2차원 배열) - \n");
    for (i = 2; i >= 0; i--)
    {
        printf("%d : %s", i + 1, data[i]); // fgets는 개행 포함, 개행 추가 불필요
    }

    return 0;
}
// 2번 문제를 malloc() 함수룰 이용하여 동일 결과를 구하고, 메모리창을 열어 할당된 메모리도 같이 캡처하시오. 
// (줄번호 108, 115, 119, 121) 채울것
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{

    char imsi[100];
    int i, size;

    printf("문자열을 입력하세요:");
    fgets(imsi, sizeof(imsi), stdin);
    size = strlen(imsi) + 1;

    char *p;
    p = (char *) malloc(size * sizeof(char));
    strcpy(p, imsi);
    
    printf("내용을 거꾸로 출력 ==> ");
    for (i = size - 1; i >= 0; i--)
    {
        printf("%c", p[i]);
    }
    printf("\n");
    return 0;
}

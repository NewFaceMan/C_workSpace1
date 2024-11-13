#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int aa[100];
    int bb[100];
    printf("문자열을 거꾸로 입력하세요: ");
    scanf("%s", aa);

    int p = strlen(aa);
    for (int i = 0; i < p; i++)
    {
        bb[i] = aa[p - (i + 1)];
    }
    bb[p] = '\0';

        printf("내용을 거꾸로 출력: %c", bb);
    return 0;
}

// k a n g n a m 을 배열에 차례대로 담고 strlen으로 길이 확인하기 (tt[]에 담고 출력)
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char ss[10] = "kangnam";
    char tt[10];
    int length = strlen(ss);
    for (int i = 0; i < length; i++)
    {
        tt[i] = ss[length-(i+1)];
    }
    printf("%s ", tt);
    printf("\n");
    return 0;
}

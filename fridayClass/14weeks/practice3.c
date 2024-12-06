// k a n g n a m 을 배열에 차례대로 담고 strlen으로 길이 확인하기
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char ss[10] = "kangnam";
    int length = strlen(ss);
    for (int i = length-1; i >= 0; i--)
    {
        printf("%c ", ss[i]);
    }
    
    return 0;
}

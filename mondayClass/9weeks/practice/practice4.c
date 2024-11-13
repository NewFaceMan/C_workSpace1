// # 기호를 5개 출력하는 함수를 만들고 호출하시오. (단 printf("#"); 문장을 이용할 것)
#include <stdio.h>
int prt();
int main(int argc, char const *argv[])
{
    prt();
    return 0;
}

int prt() {
    for (int i = 0; i < 5; i++)
    {
        printf("#");
    }
    printf("\n");
    
    return 0;
}
//2. 15를 4로 나눈 몫과 나머지를 구하는 프로그램을 작성하시오.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a; //몫
    int b; //나머지
    a = 15 / 4;
    b = 15 % 4;
    printf("15를 4로 나눈 몫은 %d이고, 나머지는 %d입니다.\n", a, b);
    return 0;
}

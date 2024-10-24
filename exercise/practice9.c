//3.10부터 1까지 역순으로 출력하는 프로그램을 for문으로 작성하시오.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    
    return 0;
}

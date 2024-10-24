//7.1부터 50까지의 짝수의 합을 구하는 프로그램을 while문으로 작성하시오.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum = 0, count = 0;
    
    while (count <= 50)
    {
        if (count % 2 == 0)
        {
        sum += count;    
        }
        count++;
    }
    printf("1부터 50까지의 짝수의 합은 %d 입니다.\n", sum);
    return 0;
}

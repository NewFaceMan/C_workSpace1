#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double result, target = 3.58;

    printf("double형 변수 target의 값 : 3.58\n");

    result = ceil(target);
    printf("올릴 함수 ceil()의 사용 결과 : %.2f\n", result);

    result = floor(target);
    printf("내릴 함수 ceil()의 사용 결과 : %.2f\n", result);

    return 0;
}

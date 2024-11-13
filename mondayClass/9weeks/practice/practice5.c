//main에서 반지름을 입력받고 반지름을 매개변수로 전달하여 원의 넓이를 출력하는 함수를 작성하시오.
#include <stdio.h>
#define PI 3.141592
double getCircleArea(int);

int main(int argc, char const *argv[])
{
    int num;
    printf("반지름을 입력하세요 : ");
    scanf("%d", &num);
    double area = getCircleArea(num);
    printf("원의 넓이: %.2f\n", area);

    return 0;
}
double getCircleArea(int r) {
    return PI * r * r;
}

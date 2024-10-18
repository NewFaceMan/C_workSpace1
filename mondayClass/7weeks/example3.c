#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float r;
    float area;
    while (1) //while을 쓸 때는 몇 번 반복하는지 아무도 모를때이다.
    {
    printf("반지름을 입력하세요: ");
    scanf("%f", &r);
    area = pow(r, 2);

    if (r == 0)
    {
        printf("종료.\n");
        break;
    }
    printf("원의 넓이는 %.2fπ입니다.\n", area);
    }
    return 0;
}

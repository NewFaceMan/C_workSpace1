#include <stdio.h>
int main(int argc, char const *argv[])
{
    int annualSal, yrsService;
    printf("연봉과 재직년수를 입력하세요: ");
    scanf("%d %d", &annualSal, &yrsService);
    if (annualSal >= 40000000 && yrsService >= 2)
    {
        printf("대출 가능\n");
    } else if (annualSal < 40000000)
    {
        printf("연봉 제한으로 대출 불가\n");
    } else if (yrsService < 2)
    {
        printf("연봉은 가능하나 재직기간 미충족으로 대출불가\n");
    }
    return 0;
}

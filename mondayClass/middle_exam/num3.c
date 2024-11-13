#include <stdio.h>
int main(int argc, char const *argv[])
{
    float radius;
    float width;
    while (1)
    {
        printf("원의 반지름을 입력하세요:");
        scanf("%f", &radius);

        if (radius == 0)
        {
            printf("종료.\n");
            return 0;
        }
        
        width = radius * radius;
        printf("원의 넓이는 %f입니다.\n", width);
    }
    

    return 0;
}

//100과 200을 더한 결과가 나오도록 %d를 3개 사용해서 printf()문을 만들어보자. 또한 나눗셈의 결과도 나오게 해보자.
//즉 다음과 같이 출력되게 해야 한다.
//결과 100 + 200 = 300, 100 / 200 = 0.5;
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 100, b = 200;
    printf("%d + %d = %d, %d / %d = %.1f\n", a, b, a+b, a, b, (float)a/b);
    return 0;
}

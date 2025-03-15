// 문제 2: 포인터와 배열
// 	1.	정수형 배열 arr[5] = {10, 20, 30, 40, 50};을 선언하고 포인터를 이용해 모든 요소를 출력하시오.
// 	2.	배열의 첫 번째 요소를 포인터로 수정하여 100으로 바꾸고, 배열 전체를 출력하시오.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d ", i, p[i]);
    }
    printf("\n");
    p[0] = 100;
    printf("arr[0] = %d\n", p[0]);
    return 0;
}

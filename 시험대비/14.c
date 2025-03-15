// 문제 4: 동적 메모리 할당
// 다음 요구사항에 따라 코드를 작성하시오.
// 	1.	사용자로부터 정수형 배열의 크기를 입력받는다.
// 	2.	malloc을 사용하여 배열을 동적으로 할당한다.
// 	3.	배열에 값을 입력받고, 모든 요소의 합을 출력한다.
// 	4.	사용한 메모리를 해제하시오.
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int size;
    int *arr;
    int sum = 0;
    printf("정수형 배열의 크기를 입력하세요: ");
    scanf("%d", &size);

    arr = (int *) malloc(size * sizeof(int));
    if (arr == NULL)
    {
        printf("메모리 할당 실패!\n");
        return 1;
    }
    for (int i = 0; i < size; i++)
    {
        printf("배열의 값을 입력하세요: ");
        printf("arr[%d] : ", i);
        scanf(" %d", &arr[i]);
        sum += arr[i];
    }
    printf("배열 요소의 합: %d\n", sum);
    free(arr);
    return 0;
}

// 문제 6: 문자열과 포인터
// 다음 조건에 맞는 프로그램을 작성하시오.
// 	1.	사용자로부터 문자열을 입력받는다.
// 	2.	포인터를 사용하여 문자열을 뒤집는 함수를 작성하시오.
// 	3.	뒤집어진 문자열을 출력하시오.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverseString(char *arr, int length);

int main(int argc, char const *argv[])
{
    int size;
    char *arr;

    printf("문자열의 최대 길이를 입력하세요 : ");
    scanf("%d", &size);
    getchar();
    arr = (char *) malloc(size + 1 * sizeof(char));
    if (arr == NULL)
    {
        printf("동적 메모리 할당 실패 !");
        return 1;
    }
    
    printf("문자열을 입력하세요: ");
    fgets(arr, sizeof(arr), stdin);

    size = strlen(arr);
    reverseString(arr, size);
    
    return 0;
}
void reverseString(char *arr, int length)
{
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }
    
}
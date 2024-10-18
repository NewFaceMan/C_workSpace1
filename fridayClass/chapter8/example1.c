#if 00
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[10];
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        printf("%d 번째 숫자를 입력하세요: ", i+1);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("합계 => %d", sum);

    return 0;
}
#endif
#if 01
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int aa[4] = {100, 200, 300, 400};
    int bb[4] = {100, 200, 300, 400};
    int cc[4] = {100, 200};
    int dd[4] = {0};
    for (int i = 0; i < 4; i++) 
    {
        printf("aa[%d]=> %d\t", i, aa[i]);
    }
    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        printf("bb[%d]=> %d\t", i, bb[i]);
    }
    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        printf("cc[%d]=> %d\t", i, cc[i]);
    }
    printf("\n");
    
    for (int i = 0; i < 4; i++)
    {
        printf("dd[%d]=> %d\t", i, dd[i]);
    }
    printf("\n");
    return 0;
}
#endif


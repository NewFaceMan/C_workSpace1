// 입력한 두 수 사이의 합계를 구하되 원하는 배수를 선택하는 프로그램이다.
// 예를 들어 100~200 중에서 4배수의 합계를 구할 수 있다.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int start, end;
    int multiple;
    int sum = 0;
    
    printf("합계의 시작값 ==> ");
    scanf("%d", &start);
    printf("합계의 끝값 ==> ");
    scanf("%d", &end);
    printf("배수 ==> ");
    scanf("%d", &multiple);

    for (int i = start; i <= end; i++)
    {
        if (i % multiple == 0)
        {
            sum += i;
        }
        
    }
    printf("%d부터 %d까지의 %d배수의 합계 ==> %d\n", start, end, multiple, sum);
    


    return 0;
}

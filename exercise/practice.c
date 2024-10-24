#if 01 //ASCII 코드 십진수 36을 문자로 출력하시오
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("%c\n",36);
    return 0;
}
#endif

#if 01 //9/5의 몫과 나머지를 구하는 프로그램을 작성하시오.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a; //몫
    int b; //나머지
    a = 9 / 5;
    b = 9 % 5;
    printf("9/5의 몫은 %d이고, 나머지는 %d입니다.\n", a, b);
    return 0;
}
#endif

#if 01 //중첩 for문을 사용해서 3,5,7,9 홀수 구구단을 출력하시오.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 3; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j < 10; j++)
            {
                printf("%d x %d = %d\t", i, j, i*j);
            }
            printf("\n");
        }
        
    }
    
    return 0;
}
#endif

#if 01 //십만원 ~ 백만원의 값을 입력받은 다음, 5만원, 1만원 지폐 및 잔돈을 교환해주는 코드를 작성하시오.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a; //입력받은 값
    printf("##지폐로 교환할 돈은? ");
    scanf("%d", &a);

    printf("오만원짜리 ==> %d\n", a / 50000); //총 금액에서 5만원을 나눈다. (5만원짜리 갯수 파악)
    a %= 50000; // a에다가 5만원을 나누고 남은 나머지를 넣는다.

    printf("만원짜리 ==> %d\n", a / 10000); // 남은 나머지값에서 만원을 나눈다. (1만원짜리 갯수 파익)
    a %= 10000; // a에다가 만원을 나누고 남은 나머지를 넣는다.

    printf("잔돈 ==> %d", a); // 잔돈 출력

    return 0;
}
#endif

#if 01 //주석 코드를 일부 수정하여 1 2 4 5 7 8을 세로로 출력하시오
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;

    for (i = 0; i < 10; i++)
    {
        if (i == 7) break;
        if (i % 3) continue; // i를 3으로 나눈 나머지가 0이 아니면 현재 반복을 건너뛰고 다음 반복으로 넘어간다. 즉 3의 배수일 때만 출력하라는 뜻
        printf("%d\n", i);
    }
    
    return 0;
}
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    for ( i = 1; i < 9; i++)
    {
        if (i % 3 != 0) printf("%d\n", i);
    }
    
    return 0;
}
#endif


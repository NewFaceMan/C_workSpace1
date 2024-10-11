# if 0
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 0;
    while (a < 5)
    {
        printf("내 이름은 홍길동입니다.\n");
        a++;
    }
    
    return 0;

}
# endif

#if 0
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 0;
    do
    {
        printf("내 이름은 한석봉입니다.\n");
        a++;
    } while (a < 5);
        
    return 0;
}
#endif

#if 0
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int menu;
    do
    {
        printf("손님 주문하시겠습니까? \n");
        printf("<1> 카페라떼 <2> 카푸치노 <3> 아메리카노 <4> 그만 시킬래요 => ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            printf("카페라떼 주문하셨습니다.\n");
            break;
        case 2:
            printf("카푸치노 주문하셨습니다.\n");
            break;
        case 3:
            printf("아메리카노 주문하셨습니다.\n");
            break;
        case 4:
            printf("주문하신 커피 준비하겠습니다.\n");
            break;
        
        
        default:
            printf("잘못 주문하셨습니다. \n");
            break;
        }
    } while (menu != 4);
    
    return 0;
}

# endif
#if 0
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;

    for (int i = 1; i < 6; i++)
    {
        printf("for 문을 %d 회 실행했습니다.\n", i);
    }
    return 0;
}
# endif

#if 0
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, y;
    for (int i = 0; ; i++)
    {
        printf("더할 두 수 입력 (멈추려면 0을 입력) : ");
        scanf("%d %d", &x, &y);

        if (x == 0)
        {
            printf("0을 입력해서 for문을 탈출했습니다.\n");
            break;
        }
        printf("%d + %d = %d\n", x, y, x + y);

    }
    return 0;
}

# endif

#if 0
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 0;
    printf("1에서 100까지의 합은? : ");
    for (int i = 0; i < 101; i++)
    {
        x += i;
    }
    printf("%d", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 0;
    int sum = 0;
    for (int i = 0; i < 101; i++)
    {
        if (i % 5 == 0)
        {
            sum += i;
        }
    }
    printf("1에서 100까지의 수 중에서 5의 배수의 합은 : %d\n", sum);
    
    return 0;
}

#endif

#if 1
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 0;
    int sum = 0;
    for (int i = 0; i < 101; i++)
    {
        sum += i;
        if (sum > 500)
        {
            printf("합이 500을 넘어섰습니다. i값 : %d\n", i);
            break;
        }
        
    }
    return 0;
}
#endif
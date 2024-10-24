#if 00 // 다음 주석 코드는 학점을 출력하는 프로그램이다. if else문으로 바꾸어 동일 결과가 나오도록 소스코드를 수정해라.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*
    int a;
    printf("점수를 입력하시오 : ");
    scanf("%d", &a);

    switch (a / 10)
    {
    case 10:
        printf("A학점입니다.\n");
        break;
    case 9:
        printf("A학점입니다.\n");
        break;
    case 8:
        printf("B학점입니다.\n");
        break;
    case 7:
        printf("C학점입니다.\n");
        break;
    case 6:
        printf("D학점입니다.\n");
        break;
    
    default:
        printf("F학점입니다..\n");
        break;
    }
    */
    int a, b;
    printf("점수를 입력하시오 : ");
    scanf("%d", &a);
    b = a / 10;
    if (b == 10)
        printf("A학점입니다.\n");
    else if (b == 9)
        printf("A학점입니다.\n");
    else if (b == 8)
        printf("A학점입니다.\n");
    else if (b == 7)
        printf("C학점입니다.\n");
    else if (b == 6)
        printf("D학점입니다.\n");
    else printf("F학점입니다..\n");

    return 0;
}
#endif

#if 00 // 다음을 출력하고, 그렇게 출력된 사유를 괄호안에 적으시오.

#include <stdio.h>
void main()
{
    int a = 100;

    printf(" %d \n", ++a); //(a에 1을 더하고 출력한다)
    printf(" %d \n", --a); //(a에 1을 빼고 출력한다)
    printf(" %d \n", a++); //(a를 출력하고 1을 더한다)
}
#endif

#if 00

#include <stdio.h>
void main()
{
int a = 100;

    printf(" %d를 오른쪽으로 1회 시프트하면 %d이다.\n", a, a>>1); //오른쪽으로 1회 시프트하면 숫자를 2로 나누는 효과가 있다.
    printf(" %d를 오른쪽으로 2회 시프트하면 %d이다.\n", a, a>>2); //오른쪽으로 1회 시프트하면 숫자를 2로 나누는 효과가 있다.
}
#endif

#if 00 //중첩 for문을 써서 아래와 같이 3~6단까지의 구구단을 거꾸로 출력하시오. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 6; i >= 3; i--)
    {
        for (int j = 1; j < 10; j++)
        {
            printf("%d x %d = %d\t", i, j, i*j);
        }
        printf("\n");
    }
    
    return 0;
}

#endif

#if 00 //문자 a를 콘솔창에 16진수로 출력하시오. 또한 메모리창을 열어 주소 ch의 값을 보이시오.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch = 'a';
    printf("%0x", ch); // 16진수 : 0x or 0X , 8진수 : 0을 앞에 붙임 , 2진수 : 0b or 0B
    return 0;
}

#endif

#if 00 //다음은 for문을 사용하여 1~10까지의 합을 구하는 프로그램이다. 이를 while문 으로 바꾸어 동일한 결과를 출력하시오.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 1;
    int sum = 0;
    while (i < 11)
    {
        sum += i;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}

#endif

#if 01 //다음은 정수를 입력받아 홀수, 짝수를 구별하는 프로그램으로 괄호 안을 작성하면 콘솔장과 같이 줄력된다. 이를 switch ~ case로 바꾸어 줄력해 보시오. 

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;

    printf("정수를 입력하세요 : ");
    scanf("%d", &a);

    // switch문의 case는 상수 값을 요구
    switch (a % 2) // a를 2로 나눈 나머지를 기준으로 분기
    {
    case 1: 
        printf("홀수를 입력했군요.\n");
        break;
    
    case 0:
        printf("짝수를 입력했군요.\n");
        break;
    
    default:
        printf("다시 입력하세요.");
        break;
    }
    return 0;
}

#endif
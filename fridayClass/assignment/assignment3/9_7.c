#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;      // 문자형 변수 ch 선언
    char *p;      // 문자형 포인터 p 선언
    char *q;      // 문자형 포인터 q 선언

    ch = 'K';     // 변수 ch에 문자 'K'를 할당
    q = &ch;      // 포인터 q에 ch의 주소를 할당 (q는 이제 ch를 가리킴)
    ch = 'M';     // 변수 ch에 문자 'M'을 할당 (ch의 값이 'M'으로 변경됨)
    p = q;        // 포인터 p에 q의 값을 할당 (p도 ch를 가리키게 됨)
    ch = 'Z';     // 변수 ch에 문자 'Z'를 할당 (ch의 값이 'Z'로 변경됨)

    printf("%c %c\n", *p, *q);  // p와 q가 가리키는 값을 출력 (둘 다 ch를 가리키므로 'Z' 출력)
    
    return 0;
}
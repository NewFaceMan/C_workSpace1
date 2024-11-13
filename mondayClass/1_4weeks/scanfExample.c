# if 0 //정수 두 개 입력받기
#include <stdio.h>

int main() {

    int a, b;
    printf("input a, b? ");
    scanf("%d %d", &a, &b); //scanf("d", location(address))
    printf("a = %d b = %d \n", a, b);
    return 0;
}
    # endif

    # if 0 //정수와 실수 입력받기
    #include <stdio.h>
    
    int main() {
        int a;
        double b;
        printf("정수 1개와 실수 1개를 입력하시오 \n");
        scanf("%d %lf", &a, &b);
        printf("정수 = %02d, 실수 = %04.1f \n", a, b);
        return 0;
    }
    #endif

    #if 0 //문자 4개 입력받아 출력

    #include <stdio.h>
    
    int main() {
        char a, b, c, d;
    
        scanf("%c", &a);
        scanf(" %c", &b);
        scanf(" %c", &c);
        scanf(" %c", &d);
        printf("나의 family name은 %c%c%c%c 입니다. \n", a, b, c, d);
        return 0;
        //입력 받을 시 버퍼 조심, &(주소기호) 이 기호 빼먹지 않기
    }
    # endif

    #if 0 // 한 자릿수 정수 입력 및 계산
    #include <stdio.h>
    
    int main() {
        int a, b;
        printf("한 자릿수 정수 1개를 입력하세요.\n");
        scanf("%d", &a);
        printf("한 자릿수 정수 1개를 입력하세요.\n");
        scanf(" %d", &b);
        printf("%d - %d = %d \n", a, b, a-b);
        return 0;
    } 
    #endif

    #if 1 //정수 연산과 문자 처리 프로그램
    #include <stdio.h>
    
    int main() {
        int a, b;
        char c;
        printf("정수 2개를 입력하세요.\n");
        scanf("%d %d", &a, &b);
        printf("%d * %d = %d \n", a, b, a * b);
        printf("%d / %d = %f \n", a, b, (float) a / b);

        printf("문자를 입력하세요. \n");
        scanf(" %c", &c);
        printf("입력문자 : %c, 아스키코드: %d\n", c, c);


        return 0;
    } 
    #endif

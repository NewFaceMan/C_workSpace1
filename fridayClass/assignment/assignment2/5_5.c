#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;

    printf("성적을 입력하세요 : ");
    scanf("%d", &num);

    if (num >= 90) {
        printf("장학생");
    }
    else if (num >= 60) {
        printf("통과");
    }
    else {
        printf("재시험");
    }
    printf("입니다\n");
    
    
    
    
    
    return 0;
}

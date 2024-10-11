#include <stdio.h>
int main(int argc, char const *argv[])
{   
    int a;
    printf("정수 하나를 입력하세요\n");
    scanf("%d", &a);
    if(a>0) {
        printf("positive\n");
    }else
    {
        printf("End\n");
    }
    
    return 0;
}

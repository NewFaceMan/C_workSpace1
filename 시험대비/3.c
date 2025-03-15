// 03 프로그램 실행 결과에 맞게 소스 코드의 빈칸을 채워 완성하시오.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int point[] = {38, 96, 14, 27, 55};
    int count = 0;
    
    count = sizeof(point) / sizeof(point[0]);
    printf("point[] = {38, 96, 14, 27, 55} \n");
    printf("배열 요소의 개수 : %d개\n", count);
    return 0;
}

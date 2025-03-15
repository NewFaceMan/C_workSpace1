//다음은 파일을 이용한 입력예를 보이고 있다. 파일 입력-> 파일 출력(fputs(s, wfp))를 이용하여 동일결과를 보이시오.
// 메모장 출력도 같이 캡처할 것
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char s[20];
    FILE *rfp;
    rfp = fopen("/Users/bagsang-u/Desktop/C_workSpace/fridayClass/14weeks/data5.txt", "r");
    fgets(s, sizeof(s), rfp);
    puts(s);
    fclose(rfp);
    return 0;
}

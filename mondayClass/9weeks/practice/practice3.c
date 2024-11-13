//자신의 이름과 학번을 출력하는 코드를 함수로 만들고 main()에서 4번 호출하시오.
#include <stdio.h>
int prt();
int main(int argc, char const *argv[])
{
    prt();
    prt();
    prt();
    prt();
    return 0;
}

int prt() {
printf("이름 : 박상우\n");
printf("학번 : 202284017\n");
return 0;
}

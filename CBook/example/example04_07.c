//실수형 자료형 변수를 선언하여 키 (cm)와 체중(kg)을 입력받은 뒤 체질량 지수인
//BMI를 산출하는 프로그램, BMI = 체중(kg) / (키(m) x 키(m)) // 키의 단위는 센티미터(cm)가 아닌 미터(m)암을 주의
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float weight, height, swap, bmi;
    printf("BMI를 산출하는 프로그램입니다. 키와 체중을 입력해주세요.\n");
    printf("(키와 체중은 소숫점 둘째자리까지 입력)\n");

    printf("키를 입력하세요(cm) : ");
    scanf("%f", &height);
    
    printf("체중을 입력하세요(kg) : ");
    scanf("%f", &weight);

    swap = height / 100; //cm를 m로 변환
    bmi = weight / (swap * swap);
    printf("센티미터로 입력한 키를 미터로 환산해서 사용\n");
    printf("BMI = 체중(kg) / (키(m) x 키(m))\n");
    printf("당신의 BMI는 %.2f입니다.\n", bmi);

    return 0;
}

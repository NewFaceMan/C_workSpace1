/*사용자가 입력한 정수의 세제곱 값을 계산하여 출력하는 프로그램을 작성하시오. 세제곱 값을 출력한 후, 프로그램은 계속 실행할지 여부를 묻습니다. 
사용자가 ‘y’를 입력하면 다시 정수를 입력받아 세제곱을 계산하며, ‘n’을 입력하면 프로그램을 종료합니다. 
만약 ‘y’나 ‘n’ 이외의 문자가 입력되면, “y/n 외에 다른 문자는 입력할 수 없습니다.“라는 메시지를 출력한 후 다시 반복합니다. */
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int x, z;
    char y;
    while (1)
    {
        printf("정수를 입력하세요. 그러면 정수의 세제곱 값이 출력됩니다.");
        scanf("%d", &x);
        z = pow(x, 3);
        printf("%d의 세 제곱은 %d입니다.\n", x, z);
        printf("프로그램을 다시 실행할까요? (네 : y, 아니오 : n 를 입력해주세요)\n");

        scanf(" %c", &y);

        if (y == 'n')
        {
            printf("프로그램을 종료합니다.\n");
            return 0;
        } else if (y == 'y')
        {
            continue;
        } else
        {
            printf("잘못 입력하셨습니다. 다시 입력하세요.");
            continue;
        }
        
        
        

    }
    
    return 0;
}

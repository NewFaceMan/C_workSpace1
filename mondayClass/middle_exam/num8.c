/* 9.사용자가 전기 또는 수도 사용량을 입력하면, 사용량에 따른 요금을 계산해주는 프로그램을 작성하시오.
사용자는 메뉴에서 전기 또는 수도를 선택하고, 사용량을 입력하면 요금이 계산됩니다. 
요금은 기본 요율에 누진세가 적용되어 계산되며, 사용자가 종료를 선택하면 프로그램이 종료됩니다. (답안 : example8.c)

전기 기본 요금 : kw당 400원
누진세 : 기본 요금에 7%가 추가로 부과됨.

수도 기본 요금 : L당 210원
누진세 : 기본 요금에 6%가 추가로 부과됨.
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    float electricityUsage;         // 전기 사용량
    float waterUsage;               // 수도 사용량
    float electricityBaseCost;      // 전기 기본 요금 (전기 사용량에 kw당 요금 적용)
    float waterBaseCost;            // 수도 기본 요금 (수도 사용량에 L당 요금 적용)
    float totalElectricityCost;     // 누진세가 적용된 총 전기 요금
    float totalWaterCost;           // 누진세가 적용된 총 수도 요금

    do
    {
        printf("전기, 수도 요금 계산 프로그램입니다. 다음 버튼을 클릭해주세요.\n");
        printf("1. 전기요금 | 2. 수도요금 | 3. 종료 ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("전기 사용량을 입력하세요(kw) : ");
            scanf(" %f", &electricityUsage);
            electricityBaseCost = electricityUsage * 400;
            totalElectricityCost = electricityBaseCost * 0.07;
            printf("누진세가 적용된 총 금액은 %.2f원입니다.\n", totalElectricityCost);
            break;
        case 2:
            printf("수도 사용량을 입력하세요(L) : ");
            scanf(" %f", &waterUsage);
            waterBaseCost = waterUsage * 210;
            totalWaterCost = waterBaseCost * 0.06;
            printf("누진세가 적용된 총 금액은 %.2d원입니다.\n", totalWaterCost);
            break;
        case 3:
            printf("프로그램을 종료합니다.\n");
            return 0;

        default:
            printf("다시 입력하세요.\n");
            break;
        }

    } while (1);
    

    return 0;
}

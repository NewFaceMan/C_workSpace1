#include <stdio.h>
int main(int argc, char const *argv[])
{
    int account;
    int sum; 
    int remain;
    printf("지폐로 교환할 돈은? : ");
    scanf("%d", &account);
    
    sum = (account / 50000);
    printf("오만 원짜리 => %d 장 \n", sum);
    remain = (account % 50000);
    sum = remain;

    sum = (sum / 10000);
    printf("만 원짜리 => %d 장\n", sum);
    remain = (remain % 10000);
    sum = remain;

    sum = (sum / 5000);
    printf("오천 원짜리 => %d 장\n", sum);
    remain = (remain % 5000);
    sum = remain;
    sum = (sum / 1000);
    printf("천 원짜리 => %d 장\n", sum);
    remain = (remain % 1000);

    printf("지폐로 바꾸지 못한 잔돈 => %d 원\n", remain);

    return 0;
}

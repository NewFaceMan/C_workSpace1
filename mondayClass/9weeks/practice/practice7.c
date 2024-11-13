// 출력할 문자와 개수를 입력받고 해당 문자를 지정한 개수만큼 출력하는 함수
#include <stdio.h>
void repeatChar(char, int);

int main(int argc, char const *argv[])
{
    char charactor;
    int number;
    printf("출력한 문자를 입력하세요: ");
    scanf("%c", charactor);
    printf("출력할 개수를 입력하세요: ");
    scanf("%d", number);

    repeatChar(charactor, number);

    return 0;
}

void repeatChar(char c, int count) {
    for (int i = 0; i < count; i++)
    {
        printf("%c", c);
    }
    printf("\n");
    
}
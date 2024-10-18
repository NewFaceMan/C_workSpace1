#include <stdio.h>
int main(int argc, char const *argv[])
{
    char input;

    printf("문자 하나를 입력하세요: ");
    scanf("%c", &input);

    if (input >= 'a' && input <= 'z') {
        for (char c = 'a'; c <= input; c++) {
            printf("%c ", c);
        }
    }
    else if (input >= 'A' && input <= 'Z') {
        for (char c = 'A'; c <= input; c++) {
            printf("%c ", c);
        }
    } 
    else {
        printf("유효한 문자가 아닙니다.\n");
    }
    return 0;
}

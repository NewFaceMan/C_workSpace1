#include <stdio.h>
int main(int argc, char const *argv[])
{
    char id[8];
    char passwd[10];

    printf("아이디(최대7자리) : _______\b\b\b\b\b\b\b");
    scanf("%s", id);

    getchar();
    printf("\n패스워드(최대9자리) : _________\b\b\b\b\b\b\b\b\b");
    scanf("%s", passwd);

    printf("\n입력한 id는 %s이고, passwd는 %s입니다.\n", id, passwd);
    return 0;
}

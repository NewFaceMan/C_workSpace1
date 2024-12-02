#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp = NULL;
    int ch;
    fp = fopen("fgetc_test.c", "r");
    if (fp == NULL)
    {
        printf("파일 열기 실패!\n");
        return 1;
    }
    
    while ((ch = fgetc(fp)) != EOF) 
    {
        fputc(ch, stdout);
    }
    
    return 0;
}

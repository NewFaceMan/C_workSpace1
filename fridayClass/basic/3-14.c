#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main() {
    char str1[10];
    char str2[10];
    char str3[10] = "CookBook";

    strcpy(str1, "Basic-c");
    strcpy(str2, str3);
    printf("str1 => %s \n", str1);
    printf("str2 => %s \n", str2);
    printf("str3 => %s \n", str3);
    
    return 0;
}


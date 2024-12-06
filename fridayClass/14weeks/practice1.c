// str(ss, "ABC"); 1: south, 2: korea => south korea 나오게 만들 것
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char ss[50] = "South ";
    char aa[] = "Korea";
    strcat(ss, aa);
    printf("%s\n", ss);
    return 0;
}

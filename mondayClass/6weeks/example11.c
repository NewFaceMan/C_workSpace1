#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);
    
    for (int i = a; i > 0; i--)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

/*
if (!(cnt % 2)) cnt--;
for(i=cnt; i>0; i-=2)
    print("%d", cnt)
    이게 더 효율적이다.
    */
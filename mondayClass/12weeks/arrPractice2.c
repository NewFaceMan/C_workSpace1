// 배열에서 최소값을 0번째에 넣기 (단, 둘의 값을 비교하는 과정에서 정보가 overWriting이 되면 안됨)
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5] = {3, 4, 1, 5, 2};
    int temp = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > a[i+1]) // 앞보다 뒤가 크면 자리교환
        {
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
        else { // 앞보다 뒤가 작거나 같으면 a[0]에 값을 넣기
            temp = a[0];
            a[0] = a[i+1];
            a[i+1] = temp;
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}

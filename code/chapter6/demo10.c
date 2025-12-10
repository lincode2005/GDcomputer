#include <stdio.h>

int main()
{
    int a[4] = {9,7,5,8};
    int i, j, temp;
    for(i=0; i<4-1; i++)
    {
        for(j=0; j<4-i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
            
    } 
    // 打印输出排序后的结果
    for(i=0; i<4; i++)
        printf("%d ", a[i]);
    return 0;
}
#include <stdio.h>

int main()
{
    int a[3][3] = {{-96,20,98}, {-65,95,106}, {100,26,-400}};
    int max, index, index_i=0, index_j=0, i, j;
    max = a[0][0];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(a[i][j]>max)
            {
                max = a[i][j];
                index_i = i;
                index_j = j;
            }
        }
    }

    // 该数所在的位置
    index = index_i*3 + index_j+1;
    printf("最大值为a[%d][%d] = %d\n", index_i, index_j, max);
    printf("它在数组中的第%d个位置\n", index);
    printf("它前面还有%d个元素", index - 1);
    return 0;
}
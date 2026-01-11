#include <stdio.h>

int main()
{
    char *names[3] = {"张三", "李四", "王五"};
    // 输出数组中某一个元素
    printf("%s\n", names[0]);
    // 输出数组中所有的元素
    int i;
    for(i=0; i<3; i++)
        printf("%s\n",names[i]);
    return 0;
}



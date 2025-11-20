#include <stdio.h>


int main()
{
    int a;
    a + = 10;   // 程序会报错
    //应该修改为如下：
    a += 10;
    return 0;
}


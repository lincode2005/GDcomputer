#include <stdio.h>
#include <string.h>

int main()
{
    // 比较两个字符串，输出最大的字符串
    char s1[10] = "abcd";
    char s2[10] = "QWR";
    if(strcmp(s1, s2)>0)
        puts(s1);
    return 0;
}


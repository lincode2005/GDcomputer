#include <stdio.h>
#include <string.h>


struct Student{
	int num; // 数据
	struct Student *next;  // 下一个节点的地址
};


int main()
{   
    char s[10];
    strcpy(s, "abcd");
    puts(s);
    return 0;
}


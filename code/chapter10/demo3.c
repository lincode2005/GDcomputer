#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("E:\\Project\\GDcomputer\\code\\chapter10\\hello.txt", "r");
    if (fp==NULL)
    {
        printf("读取失败");
        exit(0);
    } 
    char ch;
    while((ch=fgetc(fp))!=EOF)
        printf("%c", ch);
    fclose(fp); // 关闭文件
    return 0;
}


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
    char str[5];
    while(fgets(str, 5, fp)!=NULL)
        printf("%s", str);
    fclose(fp); // 关闭文件
    return 0;
}


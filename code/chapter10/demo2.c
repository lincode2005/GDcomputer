#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("E:\\Project\\GDcomputer\\code\\chapter10\\hello.txt", "r");
    if (fp==NULL)
    {
        printf("∂¡»° ß∞‹");
        exit(0);
    } 
    return 0;
}


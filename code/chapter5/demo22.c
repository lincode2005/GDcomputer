#include <stdio.h>

int main()
{
    int number;
    do
    {
        printf("请输入一个整数: ");
        scanf("%d", &number);
        if(number<=0)
            printf("输入无效，请输入一个正数\n");
    }while(number<=0);
    printf("你输入的正数是: %d\n", number);
    return 0;
}


#include <stdio.h>
int main()
{
    int a, b, temp;
    scanf("%d%d", &a, &b);
    printf("修改前: a=%d, b=%d\n", a, b);
    temp = a; a = b; b = temp;
    printf("修改后: a=%d, b=%d", a, b);
    return 0;
}




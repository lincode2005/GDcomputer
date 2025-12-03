#include <stdio.h>

int main()
{
    float a, b, max;
    scanf("%f,%f", &a, &b);
    if(a>b) max = a;
    else if(a<b) max = b;
    else printf("分值相等");
    printf("max = %f", max);
    return 0;
}
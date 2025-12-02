#include <stdio.h>
int main()
{
    int a = 5, b = 6, c = 3;
    if(a>b) c=a, b = 6, b = c;
    printf("%d%d%d\n",a, b, c);
    return 0;
}






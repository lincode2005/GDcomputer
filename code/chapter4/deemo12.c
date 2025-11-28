#include <stdio.h>

int main()
{
    int a = 1, b = -1;
    if(a>0)
    {
        if(b>0)
            a++;
    } else
        a--;
    printf("a=%d", a);
    return 0;
}

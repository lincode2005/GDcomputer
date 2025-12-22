#include <stdio.h>

void f(int w)
{
    int i;
    if(w!=0)
    {
        f(w-1);
        for(i=1; i<=w; ++i)
            printf("%d", w);
        printf("\n");
    }
}

int main()
{
    f(3);
    return 0;
}


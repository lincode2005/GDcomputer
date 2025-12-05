#include <stdio.h>

int main()
{
    int i;
    for(i=0;;i++)
    {
        if(i==5)
        {
            printf("%d", i);
            break;
        }
        printf("%d", i);
    }
    return 0;
}


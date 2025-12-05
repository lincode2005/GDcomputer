#include <stdio.h>

int main()
{
    int i, j;
    for(i=0; i<5;i++)
    {
        i++;
        for(j=0; j<3; j++)
        {
            printf("%d ", j);
            if(i>3) break;
        }        
    }
    return 0;
}


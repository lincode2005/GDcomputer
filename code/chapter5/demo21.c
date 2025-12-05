#include <stdio.h>

int main()
{
    int i = 5;
    while (i)
    {
        switch(i)
        {
            case 5: i--;
            case 4: i--;
            case 3: i--; break;
            case 2: printf("%d,", i--); continue;
            case 1: printf("%d,", i--);
        }
    } 
    return 0;
}


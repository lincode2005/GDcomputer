#include <stdio.h>

int main()
{
    int x=100, a = 10, b = 20, v1 = 5, v2 = 0;
    if(a<b)
        if(b!=15)
            if(!v1) x = 1;
            else
                if(v2) x= 10;
                else x--;
    printf("%d", x);
    return 0;
}


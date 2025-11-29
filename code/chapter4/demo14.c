#include <stdio.h>

int main()
{
    int x = 20, y = 10;
    if(x>y)
    {
        x = y;
        y = x;
    }else
        x++; 
        y++;
    printf("x=%d, y=%d", x, y);
    return 0;
}


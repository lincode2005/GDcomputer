#include <stdio.h>

int main()
{
    int x=1, y=0;
    if(!x) y++;
    else if(x==0) if(x) y+=5;
    else y+=6;
    printf("%d\n", y);
    return 0;
}
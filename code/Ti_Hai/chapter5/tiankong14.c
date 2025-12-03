#include <stdio.h>

int main()
{
    int x=1,y=2,z=3,k=0;
    if(x==1)
    if(y!=2)
    if(z==3) k=1;
    else k=2;
    else if(z!=3) k=3;
    else k=4;
    else k=5;
    printf("%d\n", k);
    return 0;
}
#include <stdio.h>
void con(int n)
{
    int i;
    if((i=n/10) != 0)
        con(i);
    putchar(n%10 + '0');
}
int main()
{
    int n = -123;
    if(n<0)
    {
        n = -n;
        putchar('-');
        con(n);
    }
    else
        con(n);
    return 0;
}


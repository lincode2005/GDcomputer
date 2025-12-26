#include <stdio.h>

int main()
{
    int a=100;
    {
        int a=20;
        printf("%d", a);
    }
    return 0;
}



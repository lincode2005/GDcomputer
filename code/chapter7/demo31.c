#include <stdio.h>

int main()
{
    int a=100;
    {
        int a = 50;
    }
    printf("%d", a);
}


#include <stdio.h>

int max(int x, int y)
{
    int z;
    z = x>y?x:y;
    return z;
}

int main()
{
    int m;
    m = max(10, 20);
    printf("max=%d", m);
    return 0;
}


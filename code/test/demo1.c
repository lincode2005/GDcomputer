#include <stdio.h>

int main()
{
    int a=1, b=1, c=1, t;
    t = ++a || ++b && ++c;
    printf("%d\n", t);
    printf("%d %d %d\n", a, b, c);

    return 0;
}

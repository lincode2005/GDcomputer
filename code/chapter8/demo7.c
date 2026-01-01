#include <stdio.h>

int main()
{
    int *p1;
    float *p2;
    double *p3;
    printf("%zu %zu %zu\n", sizeof(p1), sizeof(p2), sizeof(p3));
    return 0;
}


#include <stdio.h>

int main()
{
    int a;
    short b;
    long c;
    float d;
    double e;
    printf("%zu, %zu, %zu, %zu, %zu", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(e));
    return 0;
}
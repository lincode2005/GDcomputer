#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z, area;
    scanf("%f%f", &x, &y);
    z = sqrt(x*x + y*y);
    area = x*y/2.0;
    printf("Ð±±ß=%.2f, Ãæ»ý=%.2f\n", z, area);
    return 0;
}


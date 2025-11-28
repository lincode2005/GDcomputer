#include <stdio.h>
#include <math.h>

int main()
{
    float a=3, b = -20, c = -10;
    float delta;
    float x1, x2;
    delta = b*b - 4*a*c;
    x1 = (-b + sqrt(delta))/2*a;
    x2 = (-b - sqrt(delta))/2*a;
    printf("x1=%.2f, x2=%.2f\n", x1, x2);
    printf("%f", sqrt(4));
    return 0;
}
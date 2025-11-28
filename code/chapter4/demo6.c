#include <stdio.h>
#include <math.h>

int main()
{
    double x1, x2, delta;
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    delta = b*b - 4*a*c;
    if (delta>=0 && a!=0)
    {
        x1 = (-b + sqrt(delta))/2*a;
        x2 = (-b - sqrt(delta))/2*a;
        printf("x1=%.2f, x2=%.2f\n", x1, x2);
    }
    
    return 0;
}


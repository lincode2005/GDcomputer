#include <stdio.h>
#include <math.h>
int main()
{   
    double a, b, c, p, area;
    scanf("%lf%lf%lf", &a, &b, &c);
    if(a+b>c && a+c>b && b+c > a)
    {
        p = (a+b+c)/2.0;
        area = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("area = %.2f\n",  area);
    }
    return 0;
}


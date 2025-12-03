#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, s, area;
    scanf("%lf,%lf,%lf", &a, &b, &c);
    if(a+b>c && a+c>b && b+c>a)
    {
        s = 0.5*(a+b+c);
        area = sqrt(s*(s-a) * (s-b) * (s-c));
        printf("area=%f\n", area);
    }
    else
        printf("ÎÞÐ§±ß³¤");
    return 0;
}


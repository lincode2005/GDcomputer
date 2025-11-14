#include <stdio.h>

#define PI 3.14
#define RADIUS 5


int main()
{
    double perimeter, area;   
    perimeter = 2*PI*RADIUS;
    area = PI * RADIUS * RADIUS;
    
    printf("圆的周长 = %f\n", perimeter);
    printf("圆的面积 = %f\n", area);
    return 0;
}


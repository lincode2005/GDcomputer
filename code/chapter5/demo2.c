#include <stdio.h>

int main()
{
    int i=1, result = 1;
    while (i<=10)
    {
        result = result * i;
        i++;
    }
    printf("%d", result);
    
    return 0;
}


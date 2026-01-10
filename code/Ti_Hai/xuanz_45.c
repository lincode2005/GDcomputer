#include <stdio.h>

void f(int *s, int i, int j)
{
    int t;
    while (i<j)
    {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
    }
    
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,0}, k;
    f(a, 0, 3);
    f(a, 4, 9);
    f(a, 0, 9);
    for(k=0; k<10; k++)
        printf("%d", a[k]);
    return 0;
}
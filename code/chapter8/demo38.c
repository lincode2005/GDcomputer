#include <stdio.h>

int main()
{
    char a[20] = "abcdefg";
    char b[20];
    int i=0;
    while (a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';
    puts(b); 
    return 0;
}


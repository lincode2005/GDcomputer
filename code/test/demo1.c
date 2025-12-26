#include <stdio.h>
#include <string.h>

int main()
{   
    char a[] = "china";
    char b[] = {'c', 'h', 'i', 'n', 'a'};
    printf("%zu\n", strlen(a));
    printf("%zu\n", strlen(b));
    return 0;
}


#include <stdio.h>

int main()
{
    char s[][4] = {"abc", "def", "ghi"};
    int i;
    for(i=0; i<3; i++)
        printf("%s\n", s[i]);
    return 0;
}



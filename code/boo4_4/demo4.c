#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    switch(ch)
    {
        case 'A': printf("85~100");break;
        case 'B': printf("70~84");break;
        case 'C': printf("60~69");break;
        case 'D': printf("<60");break;
        default: printf("input error");
    }
    return 0;
}


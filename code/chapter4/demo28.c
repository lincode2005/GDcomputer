#include <stdio.h>

int main()
{
    char ch = 'a';
    switch(ch)
    {
        case 97: case 'b': printf("12");
        case 'x': case 'z': printf("34");
        default: printf("56");
    }
    return 0;
}


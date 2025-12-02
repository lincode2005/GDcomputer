#include <stdio.h>

int main()
{
    int a = 100, b = 200;
    switch (a<b)
    {
        case 1: printf("a");
        switch(a>b)
        {
            case 0: printf("b");
            case 1: printf("c"); break;
            case 2: printf("1");
        } break;
        case 0: printf("d"); break;
    }
    return 0;
}


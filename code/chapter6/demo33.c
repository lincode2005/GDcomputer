#include <stdio.h>
#include <string.h>

int main()
{
    printf("%zu\n", strlen("abc\\\t\nqw"));
    printf("%zu\n", strlen("\\\ta\12\123\1234\012"));
    printf("%zu\n", strlen("abc\192\012r\092a"));
    printf("%zu\n", strlen("\xab\012\xA1\t"));
    return 0;
}

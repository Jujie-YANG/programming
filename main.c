#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    a ^= b;
    b ^= a;
    a ^= b;
    printf(" swapped values are a=%d, b=%d\n", a, b);
    return 0;
}

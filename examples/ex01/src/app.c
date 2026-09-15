#include "app.h"

int main()
{
    int a = 1829;
    int b = 899;

    int r = a + b;

    printf("a + b=%d\n", r);

    r = a - b;

    printf("a - b=%d\n", r);

    r = a * b;

    printf("a * b=%d\n", r);

    r = a / b;

    printf("a / b=%d\n", r);

    r = a % b;

    printf("a %% b=%d\n", r);
    
    return 0;
}
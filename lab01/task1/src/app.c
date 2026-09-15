#include "app.h"

int main()
{
    double x = 1.94, a = 4.31, b = -1.43;

    double result = exp(2*x - a) + log(x - b)/(a-x);

    printf("Result: %.5f\n", result);
    return 0;
}
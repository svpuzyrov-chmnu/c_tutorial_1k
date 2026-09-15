#include "app.h"

int main()
{
    double x, a, b;

    printf("Enter x, a, b:");

    int ret = scanf("%lf %lf %lf", &x, &a, &b);

    if (ret < 3) {
        printf("Incorrect input parameters. Must be 3");
        return -1;
    }

    double result = exp(2*x - a) + log(x - b)/(a-x);

    printf("Result: %.5f\n", result);
    return 0;
}
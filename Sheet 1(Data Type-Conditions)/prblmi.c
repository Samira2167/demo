#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);

    double f = floor(a / b);
    double c = ceil(a / b);
    double r = round(a / b);

    printf("floor %.0f / %.0f = %.0f\n", a, b, f);
    printf("ceil %.0f / %.0f = %.0f\n", a, b, c);
    printf("round %.0f / %.0f = %.0f\n", a, b, r);

    return 0;
}
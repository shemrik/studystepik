#include <stdio.h>

void largeOf(double* x, double* y);

int main() {
    double x, y;
    scanf("%lf%lf", &x, &y);
    largeOf(&x, &y);
    printf("%.2lf %.2lf\n", x, y);
    return 0;
}

void largeOf(double* x, double* y) {
    if (*x >= *y) {
        *y = *x;
    } else {
        *x = *y;
    }
}
#include <stdio.h>

void usred(double* x, double* y);

int main() {
    double x, y;
    scanf("%lf%lf", &x, &y);
    usred(&x, &y);
    printf("%.1lf %.1lf", x, y);
    return 0;
}

void usred(double* x, double* y) {
    double s = (*x + *y) / 2;
    *x = s;
    *y = s;
}
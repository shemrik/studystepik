#include <math.h>
#include <stdio.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double circle(double r, double* lenght);

int main() {
    double r, square, lenght;
    scanf("%lf", &r);
    square = circle(r, &lenght);
    printf("%.2lf %.2lf\n", square, lenght);
    return 0;
}

double circle(double r, double* lenght) {
    *lenght = 2 * M_PI * r;
    return M_PI * r * r;
}
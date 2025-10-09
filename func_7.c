#include <stdio.h>

int colandProc(int x, double* proc);

int main() {
    int x, col;
    double proc;
    scanf("%d", &x);
    if (x < 0) {
        x = x * (-1);
    }
    col = colandProc(x, &proc);
    printf("%d %.0lf%%", col, proc);
    return 0;
}

int colandProc(int x, double* proc) {
    double count = 0, cont = 0;
    int s, flag = 1;
    if (x == 0) {
        cont = 1;
        *proc = 100.;
        flag = 0;
    }
    if (flag) {
        while (x > 0) {
            s = x % 10;
            cont += 1;
            x /= 10;
            if (s % 2 == 0) {
                count += 1;
            }
            s = 0;
        }
    }
    if (flag) {
        *proc = (count / cont) * 100;
    }
    return cont;
}
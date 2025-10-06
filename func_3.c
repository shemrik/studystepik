#include <stdio.h>
#define N 10

int sqr(int, int);

int main() {
    for (int i = 2; i <= N; i++) {
        printf("%d ", sqr(i, 3));
    }
    printf("\n");
    return 0;
}

int sqr(int i, int) { return i * i * i; }
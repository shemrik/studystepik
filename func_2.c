#include <stdio.h>

void output(int, int);

int main() {
    int h, l, flag = 1;
    scanf("%d%d", &h, &l);
    if (l <= 0 || h <= 0) {
        flag = 0;
        printf("ERROR");
    }
    if (flag) {
        output(l, h);
    }
    return 0;
}

void output(int h, int l) {
    int flag = 1;
    for (int j = 0; j < l; j++) {
        printf("*");
    }
    printf("\n");
    if (h == 1) {
        flag = 0;
    }
    if (flag) {
        for (int i = 0; i < h - 2; i++) {
            printf("*");
            for (int j = 0; j < l - 2; j++) {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
        for (int j = 0; j < l; j++) {
            printf("*");
        }
        printf("\n");
    }
}
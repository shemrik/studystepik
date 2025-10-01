#include <stdio.h>

int simple(int);

int main() {
    int x;
    int flag = 0;
    if (scanf("%d", &x) != 1 || x <= 1) {
        printf("No");
        flag = 1;
    }
    int c = getchar();
    if (c == '\n' && flag == 0) {
        if (simple(x)) {
            printf("Yes");
        } else {
            printf("No");
        }
    }
    return 0;
}

int simple(int x) {
    int count = 0;
    int flag = -1;
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            count++;
        }
        if (count > 2) {
            flag = 0;
        }
        if (count == 2) {
            flag = 1;
        }
    }
    return flag;
}
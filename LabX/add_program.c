#include <stdio.h>

void add(int *x, int *y, int *z, int *result) {
    *result = *x + *y + *z;
}

int main() {
    int a = 9, b = 16, c = 25, result;
    add(&a, &b, &c, &result);
    printf("Sum: %d\n", result);
    return 0;
}

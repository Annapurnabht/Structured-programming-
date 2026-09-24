#include <stdio.h>

int main() {
    int x = 10;

    int *p = &x;
    int **pp = &p;

    printf("x = %d\n", x);
    printf("Using pointer = %d\n", *p);
    printf("Using pointer to pointer = %d\n", **pp);

    return 0;
}
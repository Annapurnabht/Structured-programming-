#include <stdio.h>

int add(int, int);

int main() {
    printf("Sum = %d", add(10, 20));
    return 0;
}

int add(int a, int b) {
    return a + b;
}
#include <stdio.h>

inline int square(int x) {
    return x * x;
}

int main() {
    printf("Square = %d", square(5));

    return 0;
}
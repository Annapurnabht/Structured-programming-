#include <stdio.h>

int main() {
    int a = 10, b = 0;

    if (b == 0) {
        printf("Error: Cannot divide by zero.\n");
    } else {
        printf("Result = %d", a / b);
    }

    return 0;
}
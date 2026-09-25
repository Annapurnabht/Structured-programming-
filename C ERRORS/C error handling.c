#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Error: Cannot divide by zero.");
        return 1;
    }

    printf("Result = %d", a / b);

    return 0;
}
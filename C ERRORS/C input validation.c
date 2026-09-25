#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0 || age > 120) {
        printf("Invalid age.");
    } else {
        printf("Valid age: %d", age);
    }

    return 0;
}
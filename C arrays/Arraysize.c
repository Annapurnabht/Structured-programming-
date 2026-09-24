#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Array size = %d", size);

    return 0;
}
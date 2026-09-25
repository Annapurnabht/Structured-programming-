#include <stdio.h>

int main() {
    int *ptr = NULL;

    if (ptr == NULL) {
        printf("Pointer is NULL.");
    } else {
        printf("Pointer has an address.");
    }

    return 0;
}
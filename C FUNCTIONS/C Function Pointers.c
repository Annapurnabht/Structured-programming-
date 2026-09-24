#include <stdio.h>

void hello() {
    printf("Hello World!");
}

int main() {
    void (*ptr)();

    ptr = hello;

    ptr();

    return 0;
}
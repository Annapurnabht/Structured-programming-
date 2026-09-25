#include <stdio.h>

struct Example {
    char a;
    int b;
    char c;
};

int main() {
    struct Example e;

    printf("Size of structure: %zu bytes\n", sizeof(e));

    return 0;
}
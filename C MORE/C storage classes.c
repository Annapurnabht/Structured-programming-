#include <stdio.h>

int main() {
    auto int a = 10;
    static int b = 20;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
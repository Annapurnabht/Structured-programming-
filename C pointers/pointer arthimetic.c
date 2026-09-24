#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30};

    int *p = numbers;

    printf("%d\n", *p);

    p++;
    printf("%d\n", *p);

    p++;
    printf("%d\n", *p);

    return 0;
}
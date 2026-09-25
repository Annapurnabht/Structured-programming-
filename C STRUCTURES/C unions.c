#include <stdio.h>

union Data {
    int number;
    float decimal;
    char letter;
};

int main() {
    union Data d;

    d.number = 10;
    printf("Number: %d\n", d.number);

    d.decimal = 5.5;
    printf("Decimal: %.2f\n", d.decimal);

    d.letter = 'A';
    printf("Letter: %c\n", d.letter);

    return 0;
}
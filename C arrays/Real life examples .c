#include <stdio.h>

int main() {
    int marks[] = {80, 75, 90, 65, 85};

    for (int i = 0; i < 5; i++) {
        printf("Student %d = %d\n", i + 1, marks[i]);
    }

    return 0;
}
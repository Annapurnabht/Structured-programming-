#include <stdio.h>

int main() {
    int marks;

    for(int i = 1; i <= 5; i++) {
        printf("Enter marks of student %d: ", i);
        scanf("%d", &marks);
        printf("Marks = %d\n", marks);
    }

    return 0;
}
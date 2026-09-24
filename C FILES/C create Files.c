#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("student.txt", "w");

    fclose(file);

    printf("File created successfully.");

    return 0;
}
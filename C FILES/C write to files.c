#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("student.txt", "w");

    fprintf(file, "Hello, I am Annapurna.");

    fclose(file);

    printf("Text written successfully.");

    return 0;
}
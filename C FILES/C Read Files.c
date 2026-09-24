#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    file = fopen("student.txt", "r");

    fgets(text, 100, file);

    printf("File content: %s", text);

    fclose(file);

    return 0;
}
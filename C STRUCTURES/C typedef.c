#include <stdio.h>

typedef struct {
    int roll;
    char name[20];
    float gpa;
} Student;

int main() {
    Student s = {101, "Annapurna", 3.75};

    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("GPA: %.2f\n", s.gpa);

    return 0;
}
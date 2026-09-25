#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float gpa;
};

int main() {
    struct Student s1 = {101, "Anuradha", 3.75};

    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("GPA: %.2f\n", s1.gpa);

    return 0;
}
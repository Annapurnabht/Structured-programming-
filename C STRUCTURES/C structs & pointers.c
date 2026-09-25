#include <stdio.h>

struct Student {
    int roll;
    float gpa;
};

int main() {
    struct Student s = {101, 3.75};
    struct Student *ptr = &s;

    printf("Roll: %d\n", ptr->roll);
    printf("GPA: %.2f\n", ptr->gpa);

    return 0;
}
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[20];
    int roll;
    struct Date birthday;
};

int main() {
    struct Student s = {"Anuradha", 101, {10, 5, 2007}};

    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Birthday: %d-%d-%d\n",
           s.birthday.day,
           s.birthday.month,
           s.birthday.year);

    return 0;
}
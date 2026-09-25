#include <stdio.h>

enum Week {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    enum Week today;

    today = Wednesday;

    printf("Today is day number: %d\n", today);

    return 0;
}
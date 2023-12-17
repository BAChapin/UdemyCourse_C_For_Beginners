#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    char agestring[10];
    int age;
    int bonus;

    printf("Enter your age: ");
    // gets(agestring);     // This method is deprecated
    fgets(agestring, 10, stdin);   // This is the new preferred method
    age = atoi(agestring);

    if (age >= 45) {
        bonus = 1000;
    } else {
        bonus = 500;
    }

    printf("Your age is %d, so your bonus is %d.\n", age, bonus);

    return 0;
}
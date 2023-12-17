#include <stdio.h>

int main(int argc, char **argv) {
    int age;
    int bonus;
    age = 10;
    bonus = 2;

    age = 70;
    if (age == 45) {
        bonus = 1000;
    } else {
        bonus = 500;
    }
    printf("Your age is %d, so your bonus is %d.\n", age, bonus);

    if (age <= 70) {
        printf("You are one of our youngest employees!\n");
    }

    if (bonus >= 1000) {
        printf("You've earned a high bonus!\n");
    }
}
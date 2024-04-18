#include <stdio.h>

int main(void) {
    int age = 29;
    age = 29;

    char initial = 'D';
    float temperature = 68.5; // menos preciso
    double numberPi = 3.14159; // mais preciso

    printf("My age is %i\n", age);

    // int number;
    // printf("Please enter your age:");
    // scanf("%i", &number);
    // printf("Your age is %i\n", number);

    const int LUCKY_NUM = 7;
    printf("My lucky number is: %i\n", LUCKY_NUM);
}

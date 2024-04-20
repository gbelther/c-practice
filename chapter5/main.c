#include <stdio.h>

int main() {

    // for (int i = 1; i <= 5; i++) {
    //     printf("Iteration %i\n", i);
    // }

    // int count = 1;
    // while (count <= 5) {
    //     printf("Iteration %i\n", count);
    //     count++;
    // }

    // int count = 1;
    // do {
    //     printf("Iteration %i\n", count);
    //     count++;
    // } while (count <= 5);

    int target = 5;
    for (int i = 1; i <= 10; i++) {
        printf("Current value: %i\n", i);
        if (i == target) {
            printf("Target value reached. Exiting loop.\n");
            break; // Exit the loop
        }
    }
}
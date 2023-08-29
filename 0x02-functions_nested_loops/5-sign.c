#include <stdio.h>

int print_sign(int n) {
    if (n > 0) {
        printf("+\n");
        return 1;
    } else if (n == 0) {
        printf("0\n");
        return 0;
    } else {
        printf("-\n");
        return -1;
    }
}

int main() {
    int num;
    int result; /* Move the variable declaration to the top of the function*/

    printf("Enter a number: ");
    scanf("%d", &num);

    result = print_sign(num); / Assign the result of the function to the variable

    /* Use the variable 'result' to check the sign in the rest of your program if needed */
    if (result == 1) {
        printf("The number is positive!\n");
    } else if (result == 0) {
        printf("The number is zero!\n");
    } else {
        printf("The number is negative!\n");
    }

    return 0;
}


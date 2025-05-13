#include <stdio.h>

int main() {
    int num1, num2;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Using if-else to find the largest
    if (num1 > num2) {
        printf("The largest number is: %d\n", num1);
    } else {
        printf("The largest number is: %d\n", num2);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int number, i = 1;

    
    printf("Enter a number for the multiplication table: ");
    scanf("%d", &number);

    // Do-while loop to print the multiplication table
    do {
        printf("%d x %d = %d\n", number, i, number * i);
        i++;  // Increment the counter variable
    } while (i <= 10);  // Loop until i reaches 10

    return 0;
}

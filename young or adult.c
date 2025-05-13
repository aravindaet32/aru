#include <stdio.h>

int main() {
    int age;

    
    printf("Enter your age: ");
    scanf("%d", &age);

    
    if (age < 18) {
        printf("You are Young.\n");
    } else {
        printf("You are an Adult.\n");
    }

    return 0;
}

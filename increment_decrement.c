#include <stdio.h>

int main() {
    int a = 5, b = 5;
    printf("Initial value: a = %d, b = %d\n", a, b);
    printf("Post-increment a++: %d\n", a++);
    printf("Pre-increment ++a: %d\n", ++a);
    printf("Post-decrement b--: %d\n", b--);
    printf("Pre-decrement --b: %d\n", --b);
    printf("Final values: a = %d, b = %d\n", a, b);
    return 0;
}
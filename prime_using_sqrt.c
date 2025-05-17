#include <stdio.h>
#include <math.h>
int isPrime(int num) {
    if (num <= 1)
        return 0;
    int i;
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;  
    }
    return 1;  
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPrime(n))
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}
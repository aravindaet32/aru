int main() {
    int num1, num2, sum;

    // Input from user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Function call
    sum = add(num1, num2);

    // Output result
    printf("Sum = %d\n", sum);

    return 0;
}

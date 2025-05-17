#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, count_i = 0, count_n = 0, count_c = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'i' || str[i] == 'I') count_i++;
        if (str[i] == 'n' || str[i] == 'N') count_n++;
        if (str[i] == 'c' || str[i] == 'C') count_c++;
    }
    printf("Count of 'i': %d\n", count_i);
    printf("Count of 'n': %d\n", count_n);
    printf("Count of 'c': %d\n", count_c);
    return 0;
}
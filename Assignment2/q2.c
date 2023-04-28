#include <stdio.h>

void digits_odd_even(int number) {
    if (number <= 99) {
        printf("Invalid input");
        return;
    }
    // to print output
    printf("D ---- Odd ---- Even\n");
    while (number > 0) {
        int digit = number % 10;
        printf("%d ---- %c ------ %c\n", digit, (digit % 2 == 1) ? '+' : '-', (digit % 2 == 0) ? '+' : '-');
        number /= 10;
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    digits_odd_even(number);
    return 0;
}
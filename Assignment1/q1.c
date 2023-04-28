#include <stdio.h>

int main() {
   
    int amount;
    printf("Enter the TL amount it should be greater than or equal to 20): ");
    scanf("%d", &amount);

    if (amount < 20) {
        printf("Input must be greater than or equal to 20\n");
    }
    else {
       
        int num_twenty_bills = amount / 20;

        amount = amount - (num_twenty_bills * 20);

        int num_ten_bills = amount / 10;

        amount = amount - (num_ten_bills * 10);

        int num_five_bills = amount / 5;

        amount = amount - (num_five_bills * 5);

        int num_one_bills = amount;

        // Print the results
        printf("20 tl bills: %d\n", num_twenty_bills);
        printf("10 tl bills: %d\n", num_ten_bills);
        printf("5 tl bills: %d\n", num_five_bills);
        printf("1 tl bills: %d\n", num_one_bills);
    }

    return 0;
}

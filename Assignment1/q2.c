#include <stdio.h>
#include <stdlib.h> // for abs() function

int main() {
    int a, b, c, d;


    printf("Enter the inputs for a b c d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // calculate
    int distance = abs(a - c) + abs(b - d);

    // Print the result
    printf("The Manhattan distance between x and y is %d\n", distance);

    return 0;
}

#include <stdio.h>

char isPrime(int x) {
    if (x <= 1) {
        return 0;
    }
    for (int i = 2; i < x; i++) {
        if (x % i == 0){ 
            return 0;
            
        }
    }
    return 1;
}

void numbersofprimes(int a, int b) {
    if (b < a) {
        printf("The number b must be greater than a");
        return;
    }else {
        int count = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            count++;
            printf("%d.prime number : %d\n", count, i);
        }
    }
    printf("There are %d prime numbers between %d and %d.", count, a, b);
    }
}

int main() {
    int a, b;
    printf("Enter your numbers: ");
    scanf("%d %d", &a, &b);
    numbersofprimes(a, b);
    return 0;
}
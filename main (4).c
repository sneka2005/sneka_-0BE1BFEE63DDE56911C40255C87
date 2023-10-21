#include <stdio.h>

unsigned long long factorial(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    unsigned int number;
    printf("Enter a non-negative integer: ");
    scanf("%u", &number);

    unsigned long long result = factorial(number);
    printf("Factorial of %u = %llu\n", number, result);

    return 0;
}

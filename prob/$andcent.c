#include <stdio.h>

int main() {
    int dollars1, cents1, dollars2, cents2;

    // Read input values
    scanf("%d %d %d %d", &dollars1, &cents1, &dollars2, &cents2);

    // Add the cents and handle overflow
    int totalCents = cents1 + cents2;
    int extraDollars = totalCents / 100;
    int remainingCents = totalCents % 100;

    // Add the dollars
    int totalDollars = dollars1 + dollars2 + extraDollars;

    // Print the result
    printf("%d\n%d\n", totalDollars, remainingCents);

    return 0;
}
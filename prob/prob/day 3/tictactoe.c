//x o
#include <stdio.h>

int main() {
    int n;

    // Reading the input
    scanf("%d", &n);

    // Ensure the input is within the valid range
    if (n < 1 || n > 9) {
        printf("Invalid input\n");
        return 1;
    }

    // Calculate row and column
    int row = (n - 1) / 3;
    int column = (n - 1) % 3;

    // Print the result
    printf("%d %d\n", row, column);

    return 0;
}
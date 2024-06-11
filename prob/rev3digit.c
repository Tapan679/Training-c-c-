/rev 3 digits
#include <stdio.h>

int main() {
    int num;

    
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Invalid input. Please enter a 3-digit number.\n");
        return 1;
    }

    // Extract digits
    int hundreds = num / 100;          
    int tens = (num / 10) % 10;      
    int units = num % 10;              

    // Reverse the digits
    int reversed_num = units * 100 + tens * 10 + hundreds;

    // Print the reversed number
    printf("%d\n", reversed_num);

    return 0;
}
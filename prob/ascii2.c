//ascii 2
#include <stdio.h>

int main() {
  int ascii_value;

  // Prompt the user for an ASCII value

  scanf("%d", &ascii_value);

  // Check for valid ASCII range (0 to 127)
  if (ascii_value < 0 || ascii_value > 127) {
    printf("Invalid ASCII value. Please enter a value between 0 and 127.\n");
  } else {
    // Cast the integer to char and print the character
    char ch = (char)ascii_value;
    printf("%c\n", ascii_value, ch);
  }

  return 0;
}
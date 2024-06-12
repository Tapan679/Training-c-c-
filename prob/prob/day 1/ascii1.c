//ascii 1
#include <stdio.h>

int main() {
  char ch;

  // Prompt the user for a character
  scanf("%c", &ch);

  // Print the ASCII value of the character
  printf("%d\n", ch, (int)ch);

  return 0;
}
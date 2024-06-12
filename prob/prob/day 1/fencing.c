//fencing
#include <stdio.h>

int main() {
  int length, breadth;

  // Prompt the user for length and breadth

  scanf("%d", &length);

  scanf("%d", &breadth);

  // Validate input (length and breadth must be positive)
  if (length <= 0 || breadth <= 0) {
    printf("Error: Length and breadth must be positive values.\n");
    return 1;  // Indicate error by returning a non-zero value
  }

  // Calculate the perimeter (length of the rope)
  int perimeter = 2 * (length + breadth);

  // Calculate the area (area of the carpet)
  int area = length * breadth;

  // Display the results
  printf("The required length is %d m\n", perimeter);
  printf("The required area of carpet is %d sqm\n", area);

  return 0;  // Indicate successful execution
}
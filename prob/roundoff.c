//round off
#include <stdio.h>
#include <math.h>

int main() {
  float num;

  // Prompt the user for a float value

  scanf("%f", &num);

  // Calculate rounded-up and rounded-down values using ceil and floor
  int rounded_up = ceil(num);
  int rounded_down = floor(num);

  // Display the original value (without decimal places), rounded-up value, and rounded-down value
  printf("%d\n", (int)num);  // Cast to int to remove decimals
  printf("%d\n", rounded_up);
  printf("%d\n", rounded_down);

  return 0;
}
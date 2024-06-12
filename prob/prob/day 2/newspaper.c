//newspaper Agency
#include <stdio.h>

int main() {
  int num_copies, price_per_copy, cost_per_copy;

  // Prompt the user for input

  scanf("%d", &num_copies);

  scanf("%d", &price_per_copy);

  scanf("%d", &cost_per_copy);

  // Calculate total revenue (income from sales)
  int revenue = num_copies * price_per_copy;

  // Calculate total variable cost (cost of printing sold copies)
  int variable_cost = num_copies * cost_per_copy;

  // Calculate profit (revenue - variable cost - fixed cost)
  int profit = revenue - variable_cost - 100;

  // Display the profit
  printf("%d\n", profit);

  return 0;
}
 

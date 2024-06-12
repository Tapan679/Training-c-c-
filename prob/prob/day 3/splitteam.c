#include <stdio.h>

int main()
 {
  int num_friends, num_teams;

  // Prompt the user for input

  scanf("%d", &num_friends);

  scanf("%d", &num_teams);

  // Check if it's possible to form teams with the given number
  if (num_friends < num_teams) {
    printf("Error: Cannot form %d teams with only %d friends.\n", num_teams, num_friends);
    return 1;  // Indicate error by returning a non-zero value
  }

  // Calculate the number of friends in each team
  int friends_per_team = num_friends / num_teams;

  // Calculate the number of friends left out (remainder)
  int left_out = num_friends % num_teams;

  // Display the results
  printf("The number of friends in each team is %d and left out is %d\n", friends_per_team, left_out);

  return 0;  // Indicate successful execution
}
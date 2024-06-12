//treasure hunter
#include <stdio.h>

int main() {
    int total_coins, ben_share_percentage, blackbeard_share_percentage;

    // Read input values
    scanf("%d %d %d", &total_coins, &ben_share_percentage, &blackbeard_share_percentage);

    // Calculate Long Ben's share
    int ben_share = total_coins * ben_share_percentage / 100;

    // Remaining coins after giving Long Ben's share
    int remaining_after_ben = total_coins - ben_share;

    // Calculate Blackbeard's share
    int blackbeard_share = remaining_after_ben * blackbeard_share_percentage / 100;

    // Remaining coins after giving Blackbeard's share
    int remaining_for_pirates = remaining_after_ben - blackbeard_share;

    // Calculate each pirate's share (3 pirates)
    int each_pirate_share = remaining_for_pirates / 3;

    // Output the results
    printf("%d\n", ben_share);
    printf("%d\n", blackbeard_share);
    printf("%d\n", each_pirate_share);

    return 0;
}


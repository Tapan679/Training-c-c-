//Hotel Tariff Calculator
#include <stdio.h>

int main() {
    int month, room_rent, days_stayed;
    float peak_season_multiplier = 1.2; // 20% increase during peak seasons

    // Read input values
    scanf("%d %d %d", &month, &room_rent, &days_stayed);

    // Check if the month value is valid (between 1 and 12)
    if (month < 1 || month > 12) {
        printf("Invalid Input\n");
        return 0;
    }

    // Check if the month falls within peak seasons (April-June or November-December)
    if ((month >= 4 && month <= 6) || (month >= 11 && month <= 12)) {
        // Apply 20% increase in room rent during peak seasons
        room_rent *= peak_season_multiplier;
    }

    // Calculate the total tariff
    int total_tariff = room_rent * days_stayed;

    // Print the total tariff
    printf("%d\n", total_tariff);

    return 0;
}
#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    float mid_x, mid_y;

    // Input: coordinates of the two endpoints
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    // Calculating the midpoint
    mid_x = (x1 + x2) / 2.0;
    mid_y = (y1 + y2) / 2.0;

    // Printing the midpoint with 1 decimal place
    printf("Arun's house is located at(%.1f,%.1f)\n", mid_x, mid_y);

    return 0;
}

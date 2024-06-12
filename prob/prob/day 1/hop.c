#include <stdio.h>
#include <math.h>

int main() {
    int x, y;

    // Read input coordinates
    scanf("%d %d", &x, &y);

    // Coordinates of Peter's house
    int x1 = 3, y1 = 4;

    // Calculate the Euclidean distance
    double distance = sqrt(pow(x - x1, 2) + pow(y - y1, 2));

    // Round the distance to the nearest integer
    int hops = (int)(distance + 0.5);

    // Print the number of hops
    printf("%d\n", hops);

    return 0;
}
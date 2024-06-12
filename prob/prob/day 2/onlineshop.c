//online shop
#include <stdio.h>

int main() {
    int fk_price, fk_discount, fk_shipping;
    int sd_price, sd_discount, sd_shipping;
    int az_price, az_discount, az_shipping;

    // Read input details for Flipkart
    scanf("%d %d %d", &fk_price, &fk_discount, &fk_shipping);

    // Read input details for Snapdeal
    scanf("%d %d %d", &sd_price, &sd_discount, &sd_shipping);

    // Read input details for Amazon
    scanf("%d %d %d", &az_price, &az_discount, &az_shipping);

    // Calculate final prices on each website
    int fk_final_price = (fk_price * (100 - fk_discount) / 100) + fk_shipping;
    int sd_final_price = (sd_price * (100 - sd_discount) / 100) + sd_shipping;
    int az_final_price = (az_price * (100 - az_discount) / 100) + az_shipping;

    // Print final prices on each website
    printf("In Flipkart: Rs.%d\n", fk_final_price);
    printf("In Snapdeal: Rs.%d\n", sd_final_price);
    printf("In Amazon: Rs.%d\n", az_final_price);

    // Decide the website with the lowest price
    if (fk_final_price <= sd_final_price && fk_final_price <= az_final_price) {
        printf("Choose Flipkart\n");
    } else if (sd_final_price <= az_final_price) {
        printf("Choose Snapdeal\n");
    } else {
        printf("Choose Amazon\n");
    }

    return 0;
}
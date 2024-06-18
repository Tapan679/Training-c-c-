
#include <stdio.h>

int days_in_month(int Year, int Month) {
  // Check for valid year range
  if (Year < 1900 || Year > 9999) {
    return 0;
  }

  // Array to store days in months (except February)
  int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  // Check if it's February
  if (Month == 2) {
    // Check for leap year
    if ((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0) {
      return 29;
    } else {
      return days[Month - 1]; // Return 28 for non-leap year
    }
  } else {
    // Return days from the array for other months
    return days[Month - 1];
  }
}

int main() {
  int year, month;

 // printf("Enter year (1900-9999): ");
  scanf("%d", &year);

  //printf("Enter month (1-12): ");
  scanf("%d", &month);

  int days = days_in_month(year, month);

  if (days) {
    printf("%d Days\n", days);
  } else {
    printf("Invalid year range.\n");
  }

  return 0;
}

//trendy number
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int num;
    scanf("%d", &num);
    if (num < 100 && num > 999)
    {
        printf("Invalid Number\n");

    }
    int mid_digit= (num/10)%10;
     if(mid_digit % 3 == 0)
     {
        printf("Trendy Number\n");
         
     }
    else
    {
          printf("Not a Trendy Number\n");
       }
    return 0;
    
}


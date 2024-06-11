//harry potter
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int number;
    scanf("%d",&number);
    if(number<0)
    {
        number=-number;
    }
    int first=number/1000;
    int last = number%10;
    int sum=first+last;
    printf("%d",sum);
    return 0;
}
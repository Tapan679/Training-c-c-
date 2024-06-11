#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float P,R,N,i,am,ds,fs;
    scanf("%f %f %f",&P,&R,&N);
    i=(P*N*R)/100;
    am=i+P;
    ds=i*0.02f;
    fs=am-ds;
        printf("%.2f\n",i);
        printf("%.2f\n",am);
        printf("%.2f\n",ds);
        printf("%.2f\n",fs);

    
    return 0;
}
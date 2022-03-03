#include <stdio.h>
int main(){

float input=1;
float posTotal,posAmt=0, negAmt=0,negTotal;
double posAvg=0;
double negAvg;

    while(input !=0){
       printf("Please enter an integer: ");
        scanf("%e", &input);
        if(input > 0){
            posTotal +=input;
            posAmt++;
        }
        if (input < 0){
              negTotal += input;
              negAmt++;
        }
    }
    posAvg=(posTotal/posAmt);
     negAvg= (negTotal/negAmt);
     if (posAvg>0){
    printf("\nPositive average: %lf", posAvg);
     }
    printf("\nNegative average: %lf\n", negAvg);
     
    return 0;
}
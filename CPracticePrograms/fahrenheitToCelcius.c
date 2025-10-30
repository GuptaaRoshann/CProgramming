/*Converts a fahrenheit temperature to celcius*/

#include<stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (9.0f/5.0f)

int main(){
    float fahrenheit,celcius;

    printf("Enter fahrenheit temperature:");
    scanf("%f",&fahrenheit);

    celcius=(fahrenheit-FREEZING_PT)/SCALE_FACTOR;

    printf("celcius equivalent:%.1f\n",celcius);
    return 0;
}

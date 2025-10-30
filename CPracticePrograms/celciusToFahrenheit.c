/*Converts a celcius temperature to fahrenheit*/

#include<stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (9.0f/5.0f)

int main(){
    float celcius,fahrenheit;

    printf("Enter the temperature in celcius:");
    scanf("%f",&celcius);

    fahrenheit= SCALE_FACTOR * celcius + FREEZING_PT;

    printf("Temperature in Fahrenheit is %.1f",fahrenheit);
    return 0;
}

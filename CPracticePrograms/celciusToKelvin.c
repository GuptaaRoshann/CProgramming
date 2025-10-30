/*Converts a celcius temperature to kelvin*/

#include<stdio.h>

#define SCALE_FACTOR 273.15

int main()
{
    float celcius,kelvin;

    printf("Enter the temperature in celcius:");
    scanf("%f",&celcius);

    kelvin=celcius+SCALE_FACTOR;

    printf("Temperature in kelvin is %.2fk\n",kelvin);

    return 0;
}

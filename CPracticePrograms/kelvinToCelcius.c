/*Convert a kelvin Temperature to celcius*/

#include <stdio.h>

#define SCALE_FACTOR 273.15

int main()
{
    float celcius,kelvin;
    printf("Enter the temperature in kelvin:");
    scanf("%f",&kelvin);

    celcius=kelvin-SCALE_FACTOR;

    printf("Temperature in celcius is %.2fc\n",celcius);
    return 0;

}



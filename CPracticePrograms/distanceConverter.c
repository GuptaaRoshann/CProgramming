#include<stdio.h>
#include<conio.h>

void main(){
    float km,mt,inch,ft,cm;

    printf("Enter the distance between two cities in kilometer:");
    scanf("%f",&km);

    mt=km*1000;
    ft=mt*3.33;
    cm=mt*100;
    inch=ft*12;

    printf("The distance in meters is=%.2fmts.\n",mt);
    printf("The distance in feets is=%.2fft.\n",ft);
    printf("The distance in centimeters is=%.2fcms.\n",cm);
    printf("The distance in inches is=%.2finches.\n",inch);
}

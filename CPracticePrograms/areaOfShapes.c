#include<stdio.h>

void main(){
    float area;
    float side;
    float base,height;
    float length,breadth;

    //Area of square
    printf("Enter the side of square in cms:");
    scanf("%f",&side);
    area=side*side;
    printf("Area of square with sides%.2fcms is %.2f\n",side,area);

    //Area of triangle
    printf("Enter the base of triangle in cms:");
    scanf("%f",&base);
    printf("Enter the height of triangle n cms:");
    scanf("%f",&height);
    area=0.5*base*height;
    printf("Area of triangle with base %.2fcms and height %.2fcms is %fcms\n",base,height,area);

    //Arear of rectangle
    printf("Enter the length of rectangle in cms:");
    scanf("%f",&length);
    printf("Enter the breadth of rectangle in cms:");
    scanf("%f",&breadth);
    area=length*breadth;
    printf("The area of rectangle with length %.2fcms and breadth %.2fcms is %.2fcms\n",length,breadth,area);
    }

#include<stdio.h>

int main(){
    int numberOfYears;
    float principleAmount,rateOfInterest,simpleInterest;

    printf("Enter Principle Amount\n",principleAmount);
    scanf("%f",&principleAmount);
    printf("Enter number of years\n",numberOfYears);
    scanf("%d",&numberOfYears);
    printf("Enter rate of interest\n",rateOfInterest);
    scanf("%f",&rateOfInterest);

    simpleInterest=(principleAmount*numberOfYears*rateOfInterest)/100;
    printf("Simple interest is %f\n",simpleInterest);

    return 0;

}

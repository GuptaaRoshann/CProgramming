/*Program chaeck if the given year is a leap year or not*/

#include<stdio.h>

int main(){
    int input,i;

    printf("Please input a year and I will tell you if it's a leap year:");
    scanf("%d",&input);

    if((input%4==0&&input%100!=0)||input%400==0){
        printf("Your input(%d) Is a leap year.\n\n",input);
    }else{
        printf("Your input(%d) is NOT a leap year.\n\n",input);
    }

    return 0;
}

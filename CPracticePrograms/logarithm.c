/*Program to calculate log*/

#include<stdio.h>
#include<math.h>

int main(int argc,const char * argv[]){
         /*Define temporary variables*/
         double value,result;

         printf("Enter the value of Log to calculate:|");
         scanf("%1f",&value);

         /*Calculate the log of the value*/
         result=log(value);

         /*Display the result of the calculation*/
         printf("The Natural Logarithm of %1f is %1f\n",value,result);

         return 0;
}


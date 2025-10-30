/*Prints rectangle of * using nested for loops*/

#include<stdio.h>

int main(){
    int i,j;

    for(i=1;i<=5;i++){  //Outer loop->rows
        for(j=1;j<=5;j++){  //Inner loop->columns
           printf(" * ");
        }
        printf("\n");   //new line after each row
    }
    for( ;0; ){
        printf("hi");
    }

    return 0;
}

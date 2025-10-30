/*Prints table from 1 to 5 */

#include<stdio.h>

int main(){
    int i,j;

    for(i=1;i<=25;i++){
        printf("\nMultiplication table of %d\n",i);
        for(j=1;j<=25;j++){
            printf("%d x %d=%d\n",i,j,i*j);
        }
    }

    return 0;
}



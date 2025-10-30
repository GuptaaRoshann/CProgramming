/*Prints numbers in new line*/

#include<stdio.h>

int main(){
    int i, n;

    printf("Enter any number: ");
    scanf("%d",&n);
    //Using for loop to print numbers
    for(i=1;i<=n;i++){
        printf("Hello %d\n",i);
    }

    return 0;
}

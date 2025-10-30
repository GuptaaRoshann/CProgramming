#include<stdio.h>

void main()
{
    int a,b;

    printf("Enter a var:");
    scanf("%d",&a);
    printf("Enter b var:");
    scanf("%d",&b);
    printf("NOW WE SWAP\n");

    a=a+b;
    b=a-b;
    a=a-b;

    printf("Var of a is %d\n",a);
    printf("Var of b is %d\n",b);
    printf("Swap is %d %d",a,b);

}

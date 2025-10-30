#include <stdio.h>

int main(){
    int a,b,c;

    printf("Please enter two numbers:");
    scanf("%d%d",&a,&b);//ok

    c=a+b;//addition
    printf("The sum is %d\n",c);

    c=a-b;//substraction
    printf("The difference is %d\n",c);

    c=a*b;//multiplication
    printf("The product is %d\n",c);

    c=a/b;
    printf("The Division is %d\n",c);

    return 0;
}

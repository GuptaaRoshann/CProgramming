#include <stdio.h>

int main(){
    int n=3;
    int a=50,b=20,c=30;

    float totalCost=a+b+c;
    float discount=((n<5)?(totalCost-(totalCost/100*10)): totalCost);

    printf ("final discount=%f\n",discount);

    return 0;
    }

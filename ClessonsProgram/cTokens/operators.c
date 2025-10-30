#include <stdio.h>

int main(){
    int a=10,b=3,result;
    char ch='A';

    //Arithmetic operators
    printf("Arithmetic:%d+%d=%d\n",a,b,a+b);

    //Relational Operators
    printf("Relational:%d>%d=%d\n",a,b,a>b);

    //Logical Operators
    printf("Logical:(%d>%d)&&(%d<%d)=%d\n",a,b,a,20,(a>b)&&(a<20));

    //Bitwise operators
    printf("Bitwise:%d&%d=%d\n",a,b,a&b);

    //Assignment operators
    result=a;
    result+=b;
    printf("Assignment:result+=b->%d\n",result);

    //Unary operators
    printf("unary:++a=%d,--b=%d\n",++a,--b);

    //Ternary operators
    printf("Ternary:(a>b)?a:b=%d\n",(a>b)?a:b);

    //Miscellaneous
    printf("size of(int)=%zu\n",sizeof(int));
    printf("character ch =%c,ASCII=%d\n",ch,ch);

    return 0;
    }

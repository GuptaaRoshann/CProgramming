#include <stdio.h>
#include <stddef.h>     //for size_t(optional but explicit)

int main(){
    int n=123;
    unsigned int u=40000u;
    long int L=2000000000L;
    long long int LL=900000000000LL;
    float f=3.14159f;
    double d=2.7182961428;
    char ch='C';
    char name[]="Ada";

    /*Basic prinits*/
    printf("int:%d\n",n);
    printf("unsigned:%u\n",u);
    printf("long:%ld\n",L);
    printf("long long:%lld\n",LL);
    printf("float:%f\n",f);
    printf("double:%.10lf\n",d);
    printf("char:%c\n",ch);
    printf("string:%s\n",name);

    /*Width & precision*/
    printf("pi(2decimals):%.2f\n",f);
    printf("n right-aligned width6:|%10d|\n",n);
    printf("n left-aligned width 6:|%-6d|\n",n);

    /*Printing expressions directly*/
    printf("2+3=%d\n",2+3);
    printf("Area7x5=%d\n",7*5);

    /*Sizes and adresses*/
    printf("sizeof(int)=%zu bytes\n",sizeof(double));
    printf("adresses of n=%p\n",(void*)&n);

    return 0;
}

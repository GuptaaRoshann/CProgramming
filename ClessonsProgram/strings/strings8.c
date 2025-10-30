#include<stdio.h>
#include<stdlib.h>

int main(){
    char str1[]="1234";
    char str2[]="56.78";
    char str3[]="99999999";
    char str4[]="45.67abc";

    int num1=atoi(str1);//convert string to int
    double num2=atof(str2);//converts string to double
    long num3=atol(str3);//converts string to long
    double num4=strtod(str4,NULL);//converts string to double(reads all non-digit)

    printf("String to int(atoi):%d\n",num1);
    printf("String to double(atof):%.2f\n",num2);
    printf("Sting to long(atol):%1d\n",num3);
    printf("String to double using strtod:.2f\n",num4);

    return 0;
}

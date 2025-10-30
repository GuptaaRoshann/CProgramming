#include <stdio.h>

int main(){
    char letter=96;
    unsigned char u_char=250;  //unsigned char
    int age=-23;   //int
    unsigned int u_age=40000;   //unsigned int
    short int s_num=-32000;  //short int
    unsigned short int us_num=60000; //unsigned short int
    long int population=2000000000;  //long int
    unsigned long int u_population=4000000000;  //unsigned long int
    float pi=3.14159;  //float
    double big=123456.789012345;  //double
    long double huge=3.141592653589793238L;  //long double

    printf("char:%c\n",letter);
    printf("unsigned char:%c\n",u_char);
    printf("int:%d\n",age);
    printf("unsigned int:% u\n",u_age);
    printf("short int:%hd\n",s_num);
    printf("unsigned short int:%hu\n",us_num);
    printf("long int:%1d\n",population);
    printf("unsigned long int:%1u\n",u_population);
    printf("float:%5f\n",pi);
    printf("double:%.121f\n",big);
    printf("longdouble:%.18Lf\n",huge);
    return 0;
}

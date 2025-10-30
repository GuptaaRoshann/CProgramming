#include <stdio.h>

/*5)Types:global variables(file scope)*/
int g_counter=10;   //global with external linkage(visible to other file)
static int g_internal=5;    //static global:internal linkage(visible only on this file)

/*static local demo*/
void demostaticLocal(void){
    static int callCount=0; //static local:retains value across calls
    callCount++;
    printf("DemostaticLocal called %d times\n",callCount);
}

    /*Parameters are local to the function*/
    int add(int a,int b){ //a,b,are local(automatic)variables
        return a+b;
    }

    int main(void){
        /*1)Variable namig rules(see comments):
        -start with letter/underscore,case-sensitive,nok keywords,use meaningful names */

        int studentCount;   //2)Declaration
        float averageMarks;     //2)Declaration
        char section='A';       //4)Initialization at declaration

        studentCount=42;   //3)Assignment after declaration
        averageMarks=78.5f;    //Assignment

        int present=40,absent=2;    //4)Initialization
        int localsum=add(present,absent);   //local sum is local(Automatic)

        printf("Globals:g_counter=%d,g_internal=%d\n",g_counter,g_internal);
        printf("Class%c:students=%d(present=%d,absent=%d),avg=%.1f\n",
               section,studentCount,present,absent,averageMarks);

        demostaticLocal();
        demostaticLocal();

        return 0;
    }







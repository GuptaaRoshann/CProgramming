/*program1_gets_puts.c
Demonstrates gets() and puts()
NOTE:gets() is unsafe and removed from modern C standards
Use fgets() instead-shown below as safe alternative.
*/
#include<stdio.h>

int main(void){
    char name[50];

    printf("===Using gets() and puts()(DEPRECATED)===\n");
    printf("Enter your name(single word)using gets(): name=%d", sizeof(name));
    /*Warning:The following line is unsafe.It's shown only for teaching legacy code.
    Do NOT use gets() in real programs.It can overflow the buffer.*/
    gets(name);     /*commented out to prevent accidental use*/
    puts(name);

    /*Safer:use fgets*/
    printf("Enter your name(safe using fgets):");
    if(fgets(name,sizeof(name),stdin)!=NULL){
        /*fgets keeps the newline if it fits;remove trailing newline*/
        char *p=name;
        while(*p)p++;
        if(p>name&&*(p-1)=='\n')*(p-1)='\0';
    }
    /*puts prints the string followed by a newline*/
    printf("Using puts():\n");
    puts(name);

    /*You can still print using printf and %s*/
    printf("Using printf():%s\n",name);

    return 0;
}



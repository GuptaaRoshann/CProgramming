#include<stdio.h>
#include<ctype.h>//for character testing function

int main(){
    char str[100];
    int i;

    printf("Enter any string:");
    gets(str);//Use fgets in modern compilers

    printf("\nAnalyzing the string:\n");

    for (i=0;str[i]!='\0';i++){
        if(islower(str[i]))
            printf("'%c' is a lowercase letter.\n",str[i]);
        else if(isupper(str[i]))
            printf("'%c' is an uppercase letter.\n",str[i]);
        else if(isdigit(str[i]))
            printf("'%c' ia a digit.\n",str[i]);
        else if(isalnum(str[i]))
            printf("'%c' is a alphanumeric.\n",str[i]);
        else if(isspace(str[i]))
            printf("'%c' is a whitespace character.\n",str[i]);
        else if(ispunct(str[i]))
            printf("'%c' is a punctuation mark.\n",str[i]);
        else
            printf("'%c' is a control or special character.\n",str[i]);
    }
    return 0;
}



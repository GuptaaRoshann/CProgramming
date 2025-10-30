#include<stdio.h>

int main(){
    char ch[]="RoshanHi";
    int i=0;

    //Method 1:using length
    while(i<6){
        printf("%c\n",ch[i]);
        i++;
    }

    printf("\n");

    //Method 2:using null character
    i=0;
    while (ch[i]!='\0'){
        printf("%c",ch[i]);
        i++;
        }

        return 0;
}


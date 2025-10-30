#include <stdio.h>
#include <conio.h>  //Required for getch()and getche()

int main(){
    char ch;
    char name[30];

    //getche():input+display a single character
    printf("Enter a character(using getche):");
    ch=getche();    //immediately displays the entered character

    //putchar():display the character
    printf("\n You entered(using putchar):");
    putchar(ch);

    //gets():input a string
    printf("\n Enter your name:");
    gets(name);

    //puts():display the string
    printf("Your name is (using puts):");
    puts(name);

    return 0;
}


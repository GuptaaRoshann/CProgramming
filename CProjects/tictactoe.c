/*project file:Tic Tac Toe Game in c
Description:Two player game played on a 3x3 grid.
            Players take turns marking cells as X or O.
            The game ends when one player wins or
            when all cells are filled (draw).
Concepts used:Arrays,Loops,Functions,Conditionals,I/O
-----------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Global 3x3 array to store the game board
char board[3][3]={
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'},
};

//Function Prototypes
void displayBoard();
int checkWinner();
int isDraw();
void markBoard(int choice,char mark);

//Main Function
int main(){
    int player=1;
    int choice;
    char mark;
    int status=-1;

    do{
        system("cls");

        printf("\n\tTIC TAC TOE GAME\n");
        printf("\t------------------\n");
        printf("\nPlayer 1(X)-Player 2(O)\n\n");

        //Display current game board
        displayBoard();

        //Determine which players turn it is
        player=(player%2)?1:2;
        mark=(player==1)?'X':'O';

        //Ask the pater for a move
        printf("Player %d,enter the position (1-9):",player);
        scanf("%d",&choice);

        //update board with the players mark
        markBoard(choice,mark);

        //Check if someone has won or if it's a draw
        if(checkWinner()){
            system("cls");
            displayBoard();
            printf("\n==>Player %d wins!\n",player);
            status=1;
            break;
        }else if(isDraw()){
            system("cls");
            displayBoard();
            printf("\n==>Game Draw! \n");
            status=0;
            break;
        }

         player++;

    }while(status==-1);

    printf("\nThank you for playing Tic Tac Toe!\n");

    getch();
    return 0;
}
/*--------------------------------------------------
Function:displayBoard()
Purpose:Displays the current Tic Tac Toe Board
---------------------------------------------------*/
void displayBoard(){
    printf("\n\t %c | %c | %c",board[0][0],board[0][1],board[0][2]);
    printf("\n\t---|---|---");
    printf("\n\t %c | %c | %c",board[1][0],board[1][1],board[1][2]);
    printf("\n\t---|---|---");
    printf("\n\t %c | %c | %c \n\n",board[2][0],board[2][1],board[2][2]);
}
/*-------------------------------------------------
Function :markBoard()
Purpose :places mark on selected position
---------------------------------------------*/
void markBoard(int choice,char mark){
    int row=(choice-1)/3;
    int col=(choice-1)%3;

    if(choice<1||choice>9||board[row][col]=='X'||board[row][col]=='O'){
        printf("Invalid move!Try again.\n");
        getch();
    }else{
    board[row][col]=mark;
    }
}
/*-------------------------------------------
Function:checkWinner()
Purpose:Checks all possible winning combinitions
-----------------------------------------*/
int checkWinner(){
    for(int i=0;i<3;i++){
        if((board[i][0]==board[i][1]&&board[i][1]==board[i][2])||
            (board[0][i]==board[1][i]&&board[1][i]==board[2][i])){
            return 1;
        }
    }
    //check diagonals
    if((board[0][0]==board[1][1]==board[1][1]==board[2][2])||
        (board[0][2]==board[1][1]==board[1][1]==board[2][2])){
        return 1;
    }

    return 0;
}

/*---------------------------------
Function:isDraw()
Purpose:check if all cells are filled
------------------------------*/
int isDraw(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j] !='X'&&board[i][j] !='O')
                return 0;
        }
    }
    return 1;
}

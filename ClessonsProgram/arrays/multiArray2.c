#include<stdio.h>

int main(){
    int matrix[2][3]={
        {1,2,3},
        {4,5,6}
    };

    printf("Printing 2D array using loops:\n");
    for (int i=0;i<2;i++){
        printf("|");
        for(int j=0;j<3;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("|\n");
    }

    return 0;
}


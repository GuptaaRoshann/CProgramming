/*Character pyramid pattern program*/

#include<stdio.h>

int main(){
    int n,i,j,space;
    printf("Enter number of rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        char ch='A';
        for(j=1;j<=i;j++){
                printf("%c",ch++);
        }
        int num=1;
        for(j=1;j<=i;j++){
            printf("%d",num++);
        }
        printf("\n");
    }

    return 0;
}

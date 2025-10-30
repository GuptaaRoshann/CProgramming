/*program to show linear search*/

#include<stdio.h>

int main(){
   int n,i,x,c=0;

    printf("Enter size of array :");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d",&x);

    for (i=0;i<n;i++){
        if(a[i]==x){
            printf("Found at index %d",i);
            c++;
            break;
        }
    }
    if(c==0){
        printf("Element not found");
    }

    return 1;
}





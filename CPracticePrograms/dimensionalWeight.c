/*The program is about calculating the dimensional weight of a box,
which shipping companies use to charge based on space taken rather
than actual weight.The formula divides the box's volume by 166,
but since integer division in c truncates decimals(round down),
we adjust by adding 165 before dividing to properely round up.*/

#include <stdio.h>

int main(void){
    int height,length,width,volume,weight;

    printf("Enter the height of the box:");
    scanf("%d",&height);
    printf("Enter the length of the box:");
    scanf("%d",&length);
    printf("Enter the width of the box:");
    scanf("%d",&width);

    volume=height*length*width;
    weight=(volume+165)/166;

    printf("Volume of the box is %d(cubic inches)\n",volume);
    printf("Dimensional weight of the box is %d pounds\n",weight);
}

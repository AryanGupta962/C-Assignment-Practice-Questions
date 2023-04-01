#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter value of x and y for swapping\n");
    scanf("%d %d",&x,&y);
    printf("Value of x and y before swapping\nx=%d\ny=%d",x,y);
    z=x;
    x=y;
    y=z;
    printf("\nvalue of x and y after swapping is\nx=%d\ny=%d",x,y);
    return 0;
}

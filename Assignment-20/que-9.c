#include<stdio.h>
int main()
{
    int a[20]={2,6,7,8,9,4,5,6,2,3,6},*p;
    p=a;
printf("Array in Reverse Order\n");
    for(int i=19;i>=0;i--)
    if(a[i]>0)
    printf("%d ",a[i]);
    
}
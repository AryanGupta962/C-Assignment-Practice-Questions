#include<stdio.h>
int main()
{
    int a[20]={2,6,7,8,9,4,5,6,2,3,6},*p,sum=0;
    p=a;

    for(int i=0;i<20;i++)
    sum+=p[i];
    printf("Sum of all array elements is %d",sum);
    
}
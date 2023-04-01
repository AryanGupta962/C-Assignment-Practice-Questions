#include<stdio.h>
int main()
{
int a[10],s;
printf("Enter a number to sum of all 10 elements");
for(int i=0;i<10;i++)
{
 scanf("%d",&a[i]);
 s=s+a[i];
}
printf("Sum of all array elements is %d",s);
}

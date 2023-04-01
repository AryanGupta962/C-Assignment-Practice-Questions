#include<stdio.h>
int main()
{
int a[10],s,i;
printf("Enter a number to sum of all 10 elements");
for(i=0;i<10;i++)
{
 scanf("%d",&a[i]);
 s=s+a[i];
}
float av=(float)s/i;
printf("Sum of all array elements is %.2f",av);
}

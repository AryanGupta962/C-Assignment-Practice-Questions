#include<stdio.h>
int fun(int n)
{ static int i;
 if(n>1)
 fun(n-1);
 i=i+n*n;
return i;
}
int main()
{
 int n,j;
 printf("Enter a number to sum of square of first  n natural number");
 scanf("%d",&n);
j=fun(n);
 printf("%d",j);
}

#include<stdio.h>
int fun(int n)
{ static int i=1;
i=i*n;
 if(n>1)
 fun(n-1);

return i;
}
int main()
{
 int n,j;
 printf("Enter a number to calculate factorial");
 scanf("%d",&n);
j=fun(n);
 printf("%d",j);
}

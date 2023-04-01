#include<stdio.h>
int fun(int n)
{ static int i;
 if(n==0)
  return i;
i++;

 fun(n/10);

return i;
}
int main()
{
 int n,j;
 printf("Enter a number to calculate factorial ");
 scanf("%d",&n);
j=fun(n);
 printf("%d",j);
}

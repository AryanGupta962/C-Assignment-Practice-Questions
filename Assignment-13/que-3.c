#include<stdio.h>
int fun(int n)
{ static int i=1,o;
if(i%2==0)
 o=o+i;
i++;
 if(n>1)
 fun(n-1);
 if(i%2==0)
  o=o+i;
 i++;
return o;
}
int main()
{
 int n,j;
 printf("Enter a number to sum first n even natural number");
 scanf("%d",&n);
j=fun(n);
 printf("%d",j);
}

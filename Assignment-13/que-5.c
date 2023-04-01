#include<stdio.h>
int fun(int n)
{ static int i;
i=i+n%10;
 if(n>1)
 fun(n/10);

return i;
}
int main()
{
 int n,j;
 printf("Enter a number to sum of all digits");
 scanf("%d",&n);
j=fun(n);
 printf("%d",j);
}

#include<stdio.h>
int fun(int n,int y)
{ static int i=1;
 i=i*n;
 if(y==1)
  return i;
if(y>1)
 fun(n,y-1);

return i;
}
int main()
{
 int n,y,j;
 printf("Enter a number to calculate factorial ");
 scanf("%d %d",&n,&y);
j=fun(n,y);
 printf("%d",j);
}

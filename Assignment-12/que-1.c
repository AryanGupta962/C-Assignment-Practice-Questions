#include<stdio.h>
int fun(int n)
{
 if(n>1)
  fun(n-1);
 printf("%d ",n);
}
int main()
{
 int n;
 printf("Enter a number ");
 scanf("%d",&n);
 fun(n);
}

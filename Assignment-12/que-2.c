#include<stdio.h>
int fun(int n)
{
 printf("%d ",n);
 if(n>1)
  fun(n-1);

}
int main()
{
  int n;
 printf("Enter a number ");
 scanf("%d",&n);
 fun(n);

}

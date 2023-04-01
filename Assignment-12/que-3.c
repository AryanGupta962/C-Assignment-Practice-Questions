#include<stdio.h>
int fun(int n)
{static int i=1;
 printf("%d ",i);
 i=i+2;
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

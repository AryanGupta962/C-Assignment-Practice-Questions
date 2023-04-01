#include<stdio.h>
int fun(int n)
{ int s=0;
 if(n==1)
  return 1;
 if(n>1)
return n+fun(n-1);

}
int main()
{
 int n;
 printf("Enter a number to sum first n natural number");
 scanf("%d",&n);

 printf("%d",fun(5));
}

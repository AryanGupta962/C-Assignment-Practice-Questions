#include<stdio.h>
int fun(int n)
{
 int fact=1;

 for(int i=1;i<=n;i++)
  fact=fact*i;
  return fact;

}
int main()
{
 int n;
  printf("Enter a Number\n");
  scanf("%d",&n);
  printf("Factorial of %d is %d",n,fun(n));
    return 0;
}

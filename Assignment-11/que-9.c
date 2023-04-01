#include<stdio.h>
int fun(int n)
{
 return n*n;

}
int main()
{
  int n;
 printf("Enter a number to find square\n");
 scanf("%d",&n);
 printf("square of %d is %d",n,fun(n));
    return 0;
}

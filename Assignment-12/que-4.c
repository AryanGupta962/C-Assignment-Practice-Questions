#include<stdio.h>
int fun(int n)
{ static int i=1;
i=i+2;
 if(n>1)
  fun(n-1);
  i=i-2;
printf("%d ",i);
}
int main()
{
  int n;
 printf("Enter a number to n odd number in reverse order ");
 scanf("%d",&n);
 fun(n);

}

#include<stdio.h>
int fun(int n)
{int count=0,a=0,b=1,c=0;
 while(count!=n)
 {
  c=a+b;
  a=b;
  b=c;
  printf("%d ",c);
  count++;


 }

}

int main()
{
 int n;
 printf("Enter a numberto print Fibonacci series\n");
 scanf("%d",&n);
 fun(n);
    return 0;
}

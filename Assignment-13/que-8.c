#include<stdio.h>
int fun(int n)
{ static int a=0,b=1,c;
c=a+b;
a=b;
b=c;
if(b==1)
 printf("1 ");
if(n>1){
  printf("%d ",c);
 fun(n-1);
}

}
int main()
{
 int n,j;
 printf("Enter a number to print fibonacci series ");
 scanf("%d",&n);
fun(n);

}

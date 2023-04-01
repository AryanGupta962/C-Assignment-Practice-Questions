#include<stdio.h>
int fun(int n,int y)
{ static int i=2,hcf=1;
  if(n%i==0&&y%i==0)
   hcf=i;

  i++;
if(i==n)
 return hcf;
 fun(n,y);


}
int main()
{
 int n,y,j;
 printf("Enter a number to calculate HCF ");
 scanf("%d %d",&n,&y);
j=fun(n,y);
 printf("HCF is %d",j);
}

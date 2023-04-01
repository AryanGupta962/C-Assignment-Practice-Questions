#include<stdio.h>
int fun(int n,int n1)
{
 int max,flag=0;
 if(n>n1)
  max=n1;
 else max=n;
 for(int i=2;i<max;i++)
 {
  if(n%i==0&&n1%i==0)
  {
   flag=i;
  }

 }
 if(flag>0)
  return flag;
 else
return 1;
}

int main()
{
 int n,n1;
 printf("Enter a number\n");
 scanf("%d%d",&n,&n1);
 printf("HCF is %d",fun(n,n1));
    return 0;
}

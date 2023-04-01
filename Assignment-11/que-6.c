#include<stdio.h>
int fun(int n,int n1)
{int max;
 if(n>n1){
  max=n;
  n=n1;
  n1=max;
 }

 for(int i=n;i<=n1;i++)
 {
  for(int j=2;j<i;j++)
  if(i%j==0)
  {
   break;
  }
else
 if(j==i-1)
 printf("%d ",i);

 }

}

int main()
{
 int n,n1;
 printf("Enter a number\n");
 scanf("%d%d",&n,&n1);
 fun(n,n1);
    return 0;
}

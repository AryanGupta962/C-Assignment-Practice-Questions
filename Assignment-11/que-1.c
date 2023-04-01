#include<stdio.h>
int fun(int n,int n1)
{
 for(int i=2;i;i++)
 {
  if(i%n==0&&i%n1==0)
  {
   return i;
  }

 }

}

int main()
{
 int n,n1;
 printf("Enter a number\n");
 scanf("%d%d",&n,&n1);
 printf("LCM is %d",fun(n,n1));
    return 0;
}

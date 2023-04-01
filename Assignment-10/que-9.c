#include<stdio.h>
void fun(int n,int d)
{
 int dup=n;
 while(n!=0)
 {
  if(n%10==d){
   printf("%d is contain %d",dup,d);
  break;
  }else{
  n=n/10;
  if(n==0)
   printf("%d is not contain %d",dup,d);
  }
 }
}
int main()
{
 int n,d;
  printf("Enter a number and digit to check digit is lie on that number\n");
  scanf("%d%d",&n,&d);
  fun(n,d);
    return 0;
}

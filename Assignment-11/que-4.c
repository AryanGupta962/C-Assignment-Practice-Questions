#include<stdio.h>
int fun(int n)
{
 for(;1;){
   n=n+1;
 for(int i=2;i<n;i++)
 {
  if((n)%i==0){
   break;}
  else
   if(i==n-1){
   return n;
 }
 }


 }


}
int main()
{
 int n;
 printf("Enter a number to print next prime number\n");
 scanf("%d",&n);
 printf("Next prime Number is %d",fun(n));
    return 0;
}

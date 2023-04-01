#include<stdio.h>
void fun(int n)
{
 for(int i=2;i<n;i++)
 {
  if(n%i==0){
   printf("%d is not prime",n);
   break;}
  else
   if(i==n-1){
   printf("%d is prime",n);
  break;}
 }

}
int main()
{
 int n;
 printf("Enter a number check prime\n");
 scanf("%d",&n);
 fun(n);
    return 0;
}

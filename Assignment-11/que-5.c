#include<stdio.h>
void fun(int n)
{
 int count=0;
 printf("2 ");
 for(int i=3;count!=n;i++)
 {
  for(int j=2;j<i;j++){
  if(i%j==0){
   break;}
  else
   if(j==i-1){

   printf("%d ",i);
 count++;
  break;}
  }
 }

}
int main()
{
 int n;
 printf("Enter a number to print first N prime number\n");
 scanf("%d",&n);
 fun(n);
    return 0;
}

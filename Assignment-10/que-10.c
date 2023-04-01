#include<stdio.h>
void fun(int n)
{

 for(int i=2;i<=n;)
 {
  if(n%i==0)
  {
   n=n/i;
   printf("%d ",i);
  }
  else i++;

 }

}
int main()
{
 int n;
  printf("Enter a number print prime Factor of that Number\n");
  scanf("%d",&n);
  fun(n);
    return 0;
}

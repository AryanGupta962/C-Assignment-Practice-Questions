#include<stdio.h>
int E_O(int n)
{
 if(n%2==0)
 {
  return 1;
 }
 else return 0;

}
int main()
{
 int n;
 printf("Enter Number to check Even or Odd\n");
 scanf("%d",&n);
 if(E_O(n))
 printf("%d is Even",n);
 else
  printf("%d is Odd",n);
    return 0;
}

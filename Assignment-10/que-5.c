#include<stdio.h>
void odd(int n)
{
 for(int i=1;i<=n;i=i+2)
  printf("%d ",i);

}
int main()
{
 int n;
  printf("Enter to print N odd Number\n");
  scanf("%d",&n);
  odd(n);
    return 0;
}

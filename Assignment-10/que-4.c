#include<stdio.h>
void fun(int n)
{
 for(int i=1;i<=n;i++)
  printf("%d ",i);

}
int main()
{
 int n;
  printf("Enter to print N natural Number\n");
  scanf("%d",&n);
  fun(n);
    return 0;
}

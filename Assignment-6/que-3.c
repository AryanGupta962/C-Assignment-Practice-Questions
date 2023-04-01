
#include<stdio.h>
int main()
{
      int n,s=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=1;i<=n*2;i++)
    if(i%2!=0)
    s=s+i;
    printf("Sum of all odd no is %d",s);
    return 0;
}

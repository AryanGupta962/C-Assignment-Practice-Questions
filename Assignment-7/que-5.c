#include<stdio.h>
int main()
{
    int n,n1,g;
    printf("Enter a number\n");
    scanf("%d%d",&n,&n1);
    if(n>n1)
        g=n;
    else g=n1;
     for(int i=2;i<n||i<n1;i++)
     {
         if(n%i==0&&n1%i==0)
         {
             printf("%d and %d is not Co-prime Numbers",n,n1);
             break;
         }
         else if(i==(g-1))
         {
             printf("%d and %d is Co-prime Numbers",n,n1);
         }
     }
    return 0;
}

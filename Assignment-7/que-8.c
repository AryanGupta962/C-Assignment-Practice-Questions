
#include<stdio.h>
#include<math.h>
int main()
{int n,p=0,t,arm=0,con=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    t=n;
   for(;t!=0;)
    {
        t=t/10;
        ++p;
    }
    t=n;
for(int i=1;i<=p;i++)
{
    con=n%10;
    n=n/10;
    arm=arm+pow(con,p);
}
if(arm==t)
    printf("Number is Armstrong");
else printf("Number is Not Armstrong");
    return 0;
}

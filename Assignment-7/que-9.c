
#include<stdio.h>
#include<math.h>
int main()
{int p=0,t,arm,con=0;


  for(int i=1;i<1000;i++){
    t=i;
   for(;t!=0;)
    {
        t=t/10;
        ++p;
    }
    t=i;
    arm=0;

for(int j=1;j<=p;j++)
{
    con=t%10;
    if(t>=10)
    t=t/10;
    arm=arm+(pow(con,p));

}
p=0;
if(arm==i)
    printf("%d ",i);
     }
    return 0;
}

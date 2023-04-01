
#include<stdio.h>
int main()
{
    float c_p,s_p,r,p;
    printf("Enter cost price and selling price to check Profit and Loss\n");
    scanf("%d%d",&c_p,&s_p);
r=s_p-c_p;
if(r>0)
    p=r/s_p*100;
else
    p=r/c_p*100;
    if(r<0)
        printf("Loss %.2f%%",p);
    else
        printf("Profit %.2f%%",p);
    return 0;
}


//hcf
#include<stdio.h>
int main()
{int n,n1,hcf=0,l;
    printf("Enter two number\n");
    scanf("%d%d",&n,&n1);
    if(n<n1)
        l=n;
    else l=n1;
    for(;l>=2;)
    {
        if(n%l==0&&n1%l==0){
        hcf=l;
        break;
        }
        else
            l--;

    }
    printf("HCF of %d and %d is %d\n",n,n1,hcf);
    return 0;
}

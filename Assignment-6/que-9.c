
#include<stdio.h>
int main()
{int n,n1;
    printf("Enter two number\n");
    scanf("%d%d",&n,&n1);
    for(int i=2;(i<=n||i<=n1);){
    if(n%i==0&&n1%i==0){
       n=n/i;
    n1=n1/i;
        printf("%d\n",i);
        }else
        if(n%i==0)
        {
            n=n/i;
            printf("%d\n",i);
        }else
        if(n1%i==0)
        {
            n1=n1/i;
            printf("%d\n",i);
        }else
    if(n%i!=0||n1%i!=0)
        i++;
    }

    return 0;
}

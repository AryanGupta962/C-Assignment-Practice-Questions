#include<stdio.h>
int main()
{
    for(int i=0,k=0;i<=3;i++)
{
    for(int j=0;j<=6-i;j++)
        if(j<i)
            printf(" ");
        else
            if(j>=4)
        printf("%d",--k);
        else
            printf("%d",++k);

printf("\n");
k=0;
}

    return 0;
}

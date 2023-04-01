
#include<stdio.h>
int main()
{int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=1;i<=n*2;i++)
    if(i%2==0)
    printf("%d\n",i);

    return 0;
}

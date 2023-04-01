//Fibonacci series
#include<stdio.h>
int main()
{int a=0,b=1,s=0,n;
    printf("Enter a number\n");
    scanf("%d",&n);
   printf("1 ");
    for(int i=1;i<=n;i++){
   s=a+b;
   a=b;
   b=s;
        printf("%d ",s);
    }
    return 0;
}

//Fibonacci series
#include<stdio.h>
int main()
{int a=0,b=1,s=0,n,n1;
    printf("Enter a number\n");
    scanf("%d",&n);
   printf("Enter number in range b/w 1 to %d\n",n);
   scanf("%d",&n1);
    for(int i=1;i<=n;i++){
   s=a+b;
   a=b;
   b=s;
        if(n1==s)
        {
            printf("%d is present in fibonacci series",n1);
            break;
        }
        else if(i==n)
            printf("%d is not present in fibonacci series",n1);
    }
    return 0;
}

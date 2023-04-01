
#include<stdio.h>
int main()
{int n;
    printf("Enter a number\n");
    scanf("%d",&n);
     for(int i=2;i<n;i++)
     if(n%i==0){
    printf("%d is not prime",n);
    break;}
   else if(i==(n-1))
    printf("%d is prime",n);
    return 0;
}

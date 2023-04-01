#include<stdio.h>
int main()
{
   int n;
   printf("Enter Number to prints it's next odd number\n");
   scanf("%d",&n);
   switch(n%2==0)
   {
   case 1:
    printf("Next odd number is %d",++n);
    break;
   case 0:
    printf("Next odd number is %d",n+2);
   }
    return 0;
}

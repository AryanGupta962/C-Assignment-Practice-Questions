#include<stdio.h>
int main()
{
   int n;
   printf("Enter Number to change positive to negative or negative to positive\n");
   scanf("%d",&n);
   switch(n>0)
   {
   case 1:
    printf("negative is %d",n*(-1));
    break;
   case 0:
    switch(n<0)
    {
    case 1:
     printf("positive is %d",n*(-1));

    break;
    case 0:
     printf("Number not be zero");
   }
   }
    return 0;
}


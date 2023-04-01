

#include<stdio.h>
int main()
{int n,i=0;
    printf("Enter a number\n");
    scanf("%d",&n);
   for(;n!=0;){

    n=n/10;

   i++;
   }
   printf("Number having %d digits",i);
    return 0;
}

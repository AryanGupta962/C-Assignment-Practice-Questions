#include<stdio.h>
int main()
{
   int n,p=1;
   printf("Enter a Number\n");
   scanf("%d",&n);
   for(;1;)
   {
    if((n&1)!=1)
    {
        n=n>>1;
       p++;
       if(n&1==1){
        printf("position is %d",p);
       break;}

    }else
    {
        printf("position is %d",p);
        break;
    }
   }
    return 0;
}

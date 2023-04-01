#include<stdio.h>
int main()
{int k=3;
  for(int i=0;i<=12;i++)
{
 if(i<=3)
   k--;
   else
    k++;
    for(int j=0;j<=18;j++)
     {


     if(i<=3)
     {
     if(j>=k&&j<=6+i||j>=12-i&&j<=16+i)
      printf("*");
     else
      printf(" ");
      if(i==3&&j==18)
      k=0;
      }

     else

     if(j<19-k)
     {
      if(j<k)
       printf(" ");
      else
       printf("*");

     }



     }

     printf("\n");
}
    return 0;
}

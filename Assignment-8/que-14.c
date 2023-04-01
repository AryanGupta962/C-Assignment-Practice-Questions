#include<stdio.h>
int main()
{
  for(int i=0;i<=4;i++)
{
    for(int j=0;j<=i;j++)
        if(i==4)
        printf("*");
    else
        if(j==0||j==i)
        printf("*");

    else
        printf(" ");
printf("\n");
}
    return 0;
}

#include<stdio.h>
int main()
{
  for(int i=0;i<=4;i++)
{
    for(int j=0;j<=8-i;j++)
        if(i==0)
        printf("*");
    else if((i==j)||(8-i==j))
        printf("*");
        else printf(" ");
printf("\n");
}
    return 0;
}

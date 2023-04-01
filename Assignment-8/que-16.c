#include<stdio.h>
int main()
{
  for(int i=0;i<=4;i++)
{
    for(int j=0;j<=4+i;j++)
        if(i==4)
        printf("*");
    else
        if(j<4-i)
        printf(" ");
    else
        if(4-i==j||4+i==j)
        printf("*");
    else
        printf(" ");

printf("\n");
}
    return 0;
}

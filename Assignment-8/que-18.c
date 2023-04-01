#include<stdio.h>
int main()
{int h,l,j=0;
  for(int i=0;i<=8;i++)
{   if(i<=4){
    for(int j=0;j<=4+i;j++)
    if(j<4-i)
        printf(" ");
        else printf("*");
    }else{
for(int k=0;k<=7-j;k++)
   if(k<=j)
printf(" ");
else
    printf("*");
    }
if(i>=5)
 j++;
printf("\n");j

}
    return 0;
}

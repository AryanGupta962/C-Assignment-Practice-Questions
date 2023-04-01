#include<stdio.h>
int main()
{
    int a[10],g=0,i,j;
    printf("Enter numbers in array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

     for(i=0;i<10;i++)
    {
     for(j=1+i;j<10;j++)
      if(a[i]>a[j]){
       g=a[i];
      a[i]=a[j];
      a[j]=g;
      }
      printf("%d ",a[i]);
    }
    printf("\n");
 for(i=9;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}


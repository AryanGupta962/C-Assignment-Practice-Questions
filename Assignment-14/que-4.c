#include<stdio.h>
int main()
{
    int a[10],g=0,i;
    printf("Enter numbers in array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(g<a[i])
        {
            g=a[i];
        }


    }
    printf("greater number is %d",g);
}


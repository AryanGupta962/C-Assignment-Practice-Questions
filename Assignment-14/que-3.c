#include<stdio.h>
int main()
{
    int a[10],odd=0,even=0,i;
    printf("Enter numbers in array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even=even+a[i];
        }
        else
        {
            odd=odd+a[i];
        }

    }
    printf("Sum of odd number is %d and Sum of Even number is %d",odd,even);
}


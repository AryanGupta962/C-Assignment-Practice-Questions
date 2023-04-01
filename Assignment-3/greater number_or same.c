#include<stdio.h>
int main()
{
    int no,no2;
    printf("Enter two Number to check Greater number or both are same\n");
    scanf("%d %d",&no,&no2);
    if(no>no2)
        printf("%d is greater",no);
    else {if(no==no2)
        printf("%d both are same",no);else
        printf("%d is greater",no2);
    }
    return 0;
}



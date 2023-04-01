#include<stdio.h>
int main()
{
    int no;
    printf("Enter Number to check Entered Number is positive or not\n");
    scanf("%d",&no);
    if(no<0)
        printf("%d is negative",no);
    else
        printf("%d is positive",no);
    return 0;
}

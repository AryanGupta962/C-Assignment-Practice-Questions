#include<stdio.h>
int main()
{
    int no;
    printf("Enter Number to check Entered Number is Even or not\n");
    scanf("%d",&no);
    if((no&1)==0)
        printf("%d is Even",no);
    else
        printf("%d is Odd",no);
    return 0;
}


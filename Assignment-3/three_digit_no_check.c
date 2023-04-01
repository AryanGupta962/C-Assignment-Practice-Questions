#include<stdio.h>
int main()
{
    int no;
    printf("Enter Number to check Entered Number having 3 digit or not\n");
    scanf("%d",&no);
    if(no<=999&&no>=100)
        printf("%d is 3 Digit Number",no);
    else
        printf("%d is not a 3 digit Number",no);
    return 0;
}




#include<stdio.h>
int main()
{
    int no;
    printf("Enter Number to check Divisble by 5b or not\nN");
    scanf("%d",&no);
    if(no%5==0)
        printf("%d is divisble by 5",no);
    else
        printf("%d is not divisble by 5",no);
    return 0;
}

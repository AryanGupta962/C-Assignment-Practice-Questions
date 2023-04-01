#include<stdio.h>
int main()
{
    int no;
    printf("Enter Year to check Entered Year is Leap Year or not\n");
    scanf("%d",&no);
    if(no%4==0&&no%100!=0&&no%400)
        printf("%d is Leap year",no);
    else printf("%d is not leap year",no);

    return 0;
}


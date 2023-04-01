
#include<stdio.h>
int main()
{
    int no,y,l;
    printf("Enter year\n");
    scanf("%d",&y);
    if((y%4==0&&y%100!=0)||y%400==0)
        l=1;
    else
        l=0;
    printf("Enter Month to check Days in a month\n");
    scanf("%d",&no);
    if(no==1||no==3||no==5||no==7||no==8||no==10||no==12)
        printf("Month having 31 days");
    else if(no==2)
    {if(l==1)
        printf("Month having 29 days");
        else
            printf("Month having 28 days");}else
        printf("Month having 30 days");
    return 0;
}


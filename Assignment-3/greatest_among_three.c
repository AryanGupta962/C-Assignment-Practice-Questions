#include<stdio.h>
int main()
{
    int no,no2,no3;
    printf("Enter three Number to check Greater number and check each or two are same\n");
    scanf("%d %d %d",&no,&no2,&no3);
    if(no==no2&&no==no3){
        printf("Each are Equal");
    return 0;}
    if(no==no2)
        printf("number1=%d and number2=%d is Equal\n",no,no2);
    if(no==no3)
        printf("number1=%d and number3=%d is Equal\n",no,no3);
    if(no2==no3)
        printf("number2=%d and number3=%d is Equal\n",no2,no3);

    if(no>no2&&no>no3)
        printf("%d is greater",no);
    else {if(no2>no3)
        printf("%d is greater",no2);else
        printf("%d is greater",no3);
    }
    return 0;
}



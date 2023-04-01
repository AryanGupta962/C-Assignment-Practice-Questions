#include<stdio.h>
int main()
{
     int number,sum=0;
    printf("Enter number to print sum of all digit of Entered 3 digit number\n");
    scanf("%d",&number);
    sum=sum+(number%10);
    number/=10;
    sum=sum+(number%10);
    number/=10;
    sum=sum+(number%10);
printf("sum of all 3 digit is %d",sum);
    return 0;
}

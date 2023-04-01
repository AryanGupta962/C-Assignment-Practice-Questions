#include<stdio.h>
int main()
{
    int number;
printf("Enter Number to make the last digit of a number stored in a variable as zero\n");
scanf("%d",&number);
number/=10;
number*=10;
printf("number is %d",number);
    return 0;
}

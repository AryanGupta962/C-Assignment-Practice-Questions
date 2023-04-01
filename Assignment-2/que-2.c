#include<stdio.h>
int main()
{
    int number;
    printf("Enter number to print it's last digit of a number\n");
    scanf("%d",&number);
    number/=10;
    printf("number without last digit is=%d",number);
    return 0;
}

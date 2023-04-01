#include<stdio.h>
int main()
{
    int number;
    printf("Enter Number to print Unit digit of a number\n");
    scanf("%d",&number);
    number%=10;
    printf("Unit digit is =%d",number);

    return 0;
}

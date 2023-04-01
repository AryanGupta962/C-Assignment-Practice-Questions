#include<stdio.h>
int main()
{
int number;
printf("Enter number to check to Even or odd\n");
scanf("%d",&number);
((number^1)==(++number))?printf("Even"):printf("Odd");
    return 0;
}

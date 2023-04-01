#include<stdio.h>
int main()
{
int number,digit;
printf("program to input a number and input a digit. Append a digit in the number and print the resulting number.\n");
scanf("%d %d",&number,&digit);
number=(number*10)+digit;
printf("resulting Number is %d",number);
    return 0;
}

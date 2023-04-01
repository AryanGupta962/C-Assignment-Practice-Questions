#include<stdio.h>
int main()
{
   char c;
   float a,b;
printf("Enter choice to perform these operation .\na. Addition \nb. Subtraction\nc. Multiplication\nd. Division\ne. Exit \nEnter a,b,c,d,e\n");
scanf("%c",&c);
printf("Enter two numbers\n");
fflush(stdin);
scanf("%f %f",&a,&b);
switch(c)
{
 case 'a':
 printf("Addition is %.2f",a+b);
  break;
  case 'b':
 printf("Product is %.2f",a-b);
  break;
  case 'c':
 printf("Multiplication is %.2f",a*b);
  break;
  case 'd':
 printf("Divison is %.2f",a/b);
  break;
  case 'e':
 printf("Thank you");
  default:
   printf("Please Enter Correct  Input");
}

    return 0;
}

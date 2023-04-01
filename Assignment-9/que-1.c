#include<stdio.h>
int main()
{
int month;
printf("Enter Month\n");
scanf("%d",&month);
switch(month)
{
case 1:
 printf("30 days in january");
  break;
  case 2:
 printf("29 days in February");
  break;
  case 3:
 printf("31 days in March");
  break;
  case 4:
 printf("30 days in April");
  break;
  case 5:
 printf("31 days in May");
  break;
  case 6:
 printf("30 days in june");
  break;
  case 7:
 printf("31 days in july");
  break;
  case 8:
 printf("31 days in August");
  break;
  case 9:
 printf("30 days in September");
  break;
  case 10:
 printf("31 days in October");
  break;
  case 11:
 printf("30 days in November");
  break;
  case 12:
 printf("31 days in December");
  break;
  default :
 printf("You have Entered Wrong Number enter b/w 1 to 12");

}
    return 0;
}

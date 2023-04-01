#include<stdio.h>
int main()
{
 int year;
 printf("Enter to check to year is leap year or not\n");
 scanf("%d",&year);
 switch(year%4==0&&year%100!=0||year%400==0){
case 1:
 printf("%d is leap year",year);
 break;
case 0:
 printf("%d is not leap year",year);
 }
    return 0;
}

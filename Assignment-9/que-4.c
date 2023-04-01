#include<stdio.h>
int main()
{
   char c;
   float a,b,d;
printf("Enter choice to perform these operation .\na.Lengths of an isosceles or not. \nb. Lengths of sides of a rightangled triangle or not\nc. Equilateral triangle or not\ne. Exit \nEnter a,b,c,d\n");
scanf("%c",&c);
printf("Enter three numbers\n");
fflush(stdin);
scanf("%f %f %f",&a,&b,&d);
switch(c)
{
 case 'a':
 switch(a==b||b==d||a==d){
 case 0:
  printf("Triangle is not isosceles");
  break;
 case 1: printf("Triangle is isosceles");
 break;
 }
break;
  case 'b':
switch(d*d==a*a+b*b||a*a==b*b+d*d||b*b==a*a+d*d){
case 0:
  printf("this Triangle is not a rightangled triangle");
  break;
case 1:
 printf("Triangle is rightangled");
 break;}
  break;
  case 'c':
    switch(a==b&&b==d){
   case 0:
     printf("Triangle is not equivalent Triangle");
     break;
   case 1:
 printf("Triangle is equivalent Triangle");
 break;
    }
break;
  case 'd':
 printf("Thank you");
  break;
}
}

#include<stdio.h>
int maximum(int *p1,int *p2)
{
if(*p1>*p2)
return *p1;
else
return *p2;
}
int main()
{   
    int num1,num2;
   printf("Enter two numbers\n");
   scanf("%d %d",&num1,&num2);
  
printf("%d is maximum", maximum(&num1,&num2));
}
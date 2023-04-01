#include<stdio.h>
int swap(int *p1,int *p2)
{
int cont=*p1;
*p1=*p2;
*p2=cont;
}
int main()
{   
    int num1,num2;
   printf("Enter two numbers\n");
   scanf("%d %d",&num1,&num2);
   swap(&num1,&num2);
printf("value of num1=%d and num2=%d",num1,num2);
}
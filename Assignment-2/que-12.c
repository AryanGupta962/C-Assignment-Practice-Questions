#include<stdio.h>
int main()
{
int number,result=0;
printf("Enter a 3 digit Number rotate its digit by one position\n");
scanf("%d",&number);
result=number%100;
number=number/100;
result=result*10+number;
printf("number is %d",result);
    return 0;
}

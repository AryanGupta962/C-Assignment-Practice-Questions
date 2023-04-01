
#include<stdio.h>
int main(){
int no;
printf("Enter Number to check it is divisble by 7 and 3 or not");
scanf("%d",&no);
if(no%7==0)
    printf("%d is Divisble by 7\n",no);
else printf("%d is Not Divisble by 7\n ",no);
if(no%3==0)
    printf("%d is Divisble by 3\n",no);
else printf("%d is Not Divisble by 3\n ",no);

}

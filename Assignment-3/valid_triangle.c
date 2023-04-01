#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Sides a,b and c and check triangle is valid or not\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
     printf("Triangle is Valid");else
     printf("Triangle is Invalid");
    return 0;
}


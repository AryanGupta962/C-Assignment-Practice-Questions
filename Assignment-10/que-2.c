#include<stdio.h>
float S_I(float p,float r,float t)
{
 return p*r*t/100;
}
int main()
{float p,r,t;
 printf("Enter Principle,rate and Time\n");
 scanf("%f%f%f",&p,&r,&t);
 printf("simple intrest is %.2f",S_I(p,r,t));
    return 0;
}

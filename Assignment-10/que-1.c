#include<stdio.h>
float area(float r)
{
 return (r=3.14*r*r);
}
int main()
{
 float r;
printf("Enter radius\n");
scanf("%f",&r);
printf("Area of circle is %f",area(r));
    return 0;
}

//WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
#include<stdio.h>
int main()
{
    float radius;
    printf("Enter radius\n");
    scanf("%f",&radius);
    printf("Area of Circle is %.3f having the radius %.3f",3.14*radius*radius,radius);
    return 0;
}

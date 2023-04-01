#include<stdio.h>
int main()
{
    double INR_amount,USD_1=76.23;
    printf("Enter Indian rupee to convert USD\n");
    scanf("%lf",&INR_amount);
    INR_amount=INR_amount*USD_1;
    printf("%lf Indian rupee",INR_amount);

    return 0;
}

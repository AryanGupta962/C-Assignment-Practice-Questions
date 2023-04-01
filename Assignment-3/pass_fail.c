#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    printf("Enter number of 5 subjects to check wheather student is pass or fail\n");
    scanf("%d %d %d%d%d",&s1,&s2,&s3,&s4,&s5);
    if(s1>=33&&s2>=33&&s3>=33&&s4>=33&&s5>=33)
        printf("Student is pass he/she scoring above 33 marks in each subject ");
        else
          printf("Student is fail he/she scoring lesser to 33 marks in each subject");
    return 0;
}

#include <stdio.h>
#include <string.h>
#include<conio.h>
int main()
{   system("cls");
    int i,j,find=0,num,fact=1;
    char str[5][20],stringfind[20];
    printf("Enter 5 Sting\n");
    for (i = 0; i < 5; i++)
        gets(str[i]);
    printf("Enter your name if your name in the list you are allow to calculate factorial\n");
    gets(stringfind);
    for (i = 0; i < 5; i++)
     {
        if(strlen(str[i])==strlen(stringfind))
        {
             for (j = 0; str[i][j] != '\0';j++)
             {
                if(str[i][j]==stringfind[i]);
                find++;
             }
             if(j==find){

             printf("you are allowed to calculate factorial\nEnter a number\n");
             scanf("%d",&num);
             for(i=1;i<=num;i++)
             fact=fact*i;
             printf("Factorial is %d",fact);
             return 0;}
        }

     }
        printf("your name is not found");
}

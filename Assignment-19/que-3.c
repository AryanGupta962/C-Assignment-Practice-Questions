#include <stdio.h>
#include <string.h>
#include<conio.h>
int main()
{   system("cls");
    int i;
    char str[5][20];
    printf("Enter 5 Sting\n");
    for (i = 0; i < 5; i++)
        gets(str[i]);
printf("\nEntered String is --\n");
    for (i = 0; i < 5; i++)
        printf("%s\n",str[i]);
}
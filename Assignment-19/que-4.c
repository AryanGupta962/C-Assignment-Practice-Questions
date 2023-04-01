#include <stdio.h>
#include <string.h>
#include<conio.h>
int main()
{   system("cls");
    int i,j,find=0;
    char str[5][20],stringfind[20];
    printf("Enter 5 Sting\n");
    for (i = 0; i < 5; i++)
        gets(str[i]);
    printf("Enter String  Which you want to find\n");
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
             printf("String match found");
             return 0;}
        }

     }
        printf("String Match not found");
}

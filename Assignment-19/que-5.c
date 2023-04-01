#include <stdio.h>
#include <string.h>
#include<conio.h>
int main()
{   system("cls");
    int i,j,find=0;
    char str[5][20];
    printf("Enter 5 Sting\n");
    for (i = 0; i < 5; i++)
        gets(str[i]);
         for (i = 0; i < 5; i++){
        for (j = 0;str[i][j]!='\0'; j++)
        {
            if(str[i][j]=='@'){
            break;
            }
            else
            find=1;
        }
        if(find!=0)
        printf("ODD-%s\n",str[i]);
         }
}
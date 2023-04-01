#include <stdio.h>
#include <string.h>
#include<conio.h>
int main()
{   system("cls");
    int i,j,k,find=0;
    char str[5][20];
    printf("Enter 5 Sting\n");
    for (i = 0; i < 5; i++)
        gets(str[i]);
         for (i = 0; i < 5; i++){
        for (j = 0,k=strlen(str[i])-1;j<strlen(str[i])/2; j++,k--)
        {
                if(str[i][j]!=str[i][k]){
                printf("%d position String is not palindrome\n",i+1);
                break;
                }
        }
        if(strlen(str[i])/2==j)
            printf("%d position String is palindrome\n",i+1);
         }
}
#include <stdio.h>
#include <string.h>
#include<conio.h>
int main()
{   system("cls");
    int i, j, k;
    char str[10][20],temp[20];
    printf("Enter 10 Sting\n");
    for (i = 0; i < 10; i++)
        gets(str[i]);
 for (i = 0; i < 9; i++)
        for (j = i + 1; j < 10; j++)
        {
   
            if (strlen(str[i]) < strlen(str[j])||strlen(str[i])==strlen(str[j]))
            {
                for (k = 0; str[i][k] != '\0'; k++)
                {
                    if (str[i][k] > str[j][k])
                    {
                        strcpy(temp, str[i]);
                        strcpy(str[i], str[j]);
                        strcpy(str[j], temp);
                        break;
                    }
                    else if (str[i][k] < str[j][k])
                    break;

                }
            }
            else if (strlen(str[j]) < strlen(str[i]))
            {
                for (k = 0; str[j][k] != '\0'; k++)
                {
                    if (str[i][k] > str[j][k])
                    {
                        strcpy(temp, str[i]);
                        strcpy(str[i], str[j]);
                        strcpy(str[j], temp);
                        break;
                    }
                     else if (str[i][k] < str[j][k])
                    break;
                }
            }
        }
        printf("\nsorted string-\n\n");
        for(i=0;i<10;i++)
        printf("%s\n",str[i]);
}
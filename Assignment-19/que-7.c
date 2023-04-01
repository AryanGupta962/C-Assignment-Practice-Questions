#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int dot = 0, i,j,num=0,flag;
    char str[5][15] = {"10.34.125.89", "9.434.125.89", "12.4.125.9", "10.34.1257.89", "1092.34.125.89"}, *p;
    for (i = 0; i < 5;i++){
        dot=0;
        for (j = 0;str[i][j]!='\0'; j++){
            if (str[i][j] == '.')
                dot++;
            }
               if(dot==3)
                {                                                       
                    p=strtok(str[i],".");
                    num=atoi(p);
                    if(num>255||num<0)
                     printf("Invalid ip address\n");
                     else
                     {
                        while (p!=NULL)
                        {    p=strtok(NULL,".");
                         num=atoi(p);
                         if(num>255||num<0){
                         printf("Invalid ip address\n"); flag=0; break;} else flag=1;
                        } if(flag==1)
                        printf("Valid Ip address\n");
                      
                     }

                }
                 else
                printf("Invalid ip address\n");

        
    }
}
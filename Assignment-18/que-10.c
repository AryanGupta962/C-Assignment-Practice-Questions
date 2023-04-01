#include<stdio.h>
#include<string.h>
int repeated_char(char str[])
{int hash[300]={0};
for(int i=0;str[i]!='\0';i++)
    hash[str[i]]++;
    for(int i=0;i<300;i++)
if(hash[i]>1)
printf("%c is repeated\n",i);
}
int main()
{
char str[20];
    printf("Enter String to find repeated character\n");
    gets(str);
    repeated_char(str);
}
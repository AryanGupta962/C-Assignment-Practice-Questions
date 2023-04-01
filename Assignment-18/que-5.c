#include<stdio.h>
#include<string.h>
int lowercase(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    if(str[i]>=65&&str[i]<=90)
    str[i]+=32;
}
int main()
{
char str[20];
printf("Enter String to convert it into lowercase\n");
gets(str);
lowercase(str);
printf("%s",str);
}
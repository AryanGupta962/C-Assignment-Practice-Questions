#include<stdio.h>
#include<string.h>
int strlength(char str[])
{int i;
for(i=0;str[i]!='\0';i++);
return i;
}
int main()
{
char str[20];
printf("Enter String to finds it's length\n");
gets(str);
int len=strlength(str);
printf("Length of String is %d ",len);
}
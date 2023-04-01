#include<stdio.h>
#include<string.h>
int rev_str(char str[])
{ int i,j,length;
char swap;
length=strlen(str);
for(i=0,j=length-1;i<length/2;i++,j--)
{
    swap=str[i];
    str[i]=str[j];
    str[j]=swap;
}
    
}
int main()
{
char str[20];
printf("Enter String to reverse\n");
gets(str);
rev_str(str);
printf("%s",str);
}
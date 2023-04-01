#include <stdio.h>
int main()
{
   int length;
    char str[20],swap;
    printf("Enter a String to Reverse\n");
    gets(str);
  length=strlen(str);
//printf("%d",length);
    for (int i = 0,j=length-1; i<length/2; i++,j--)
    {
       swap=str[i];
       str[i]=str[j];
       str[j]=swap;
       
    }

    printf("%s",str);
}
#include <stdio.h>
int main()
{
   
    char str[20], chr;
    printf("Enter a String to Convert in Uppercase\n");
    gets(str);
  

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]>=65&&str[i]>=97)
           str[i]=str[i]-32;
    }
    printf("%s",str);
}
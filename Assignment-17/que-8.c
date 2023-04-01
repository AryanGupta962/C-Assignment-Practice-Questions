#include <stdio.h>
int main()
{
   int i;
    char str[20],str1[20];
    printf("Enter a String to copy to another String\n");
    gets(str);
  

    for ( i = 0; str[i] != '\0'; i++)
    {
       
           str1[i]=str[i];
    }
    str1[i]='\0';
    printf("After copying to another string s1\n%s",str1);
}
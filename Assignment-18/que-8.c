#include<stdio.h>
#include<string.h>
int word_counter(char str[])
{ int word=1,len;
   len=strlen(str);
   for(int i=0;str[i]!='\0';i++) 
   {
    if(str[i]==32)
    word++;
   }
   return word;
}
int main()
{
    char str[20];
printf("Enter String to check word\n");
gets(str);
printf("String has %d words",word_counter(str));

}
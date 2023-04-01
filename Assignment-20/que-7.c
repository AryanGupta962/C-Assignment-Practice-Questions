#include<stdio.h>
int main()
{   int vowels=0,consonant=0;
    char str1[20];
    printf("Enter a String to calculate vowels and consonant\n");
    gets(str1);
   for(int i=0;str1[i]!='\0';i++)
   {
  if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')
  vowels++;
   }
   consonant=26-vowels;
    printf("vowels= %d\nconsonant= %d",vowels,consonant);
}
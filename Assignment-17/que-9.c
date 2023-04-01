#include <stdio.h>
int main()
{
   int i;
    char str[20],swap,hash[300]={'\0'};
    printf("Enter a String to sort in ascending order\n");
    gets(str);
  

    for ( i = 0; str[i] != '\0'; i++)
    {
         for (int j = i+1;str[j]!='\0'; j++)
         if(str[i]>str[j])
         {
      swap=str[i];
       str[i]=str[j];
       str[j]=swap;
         }
    }
     
     
      printf("%s",str);
    
}
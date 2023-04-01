
#include <stdio.h>
int main()
{
   int i,hash[300]={0};
    char str[20],swap;
    printf("Enter a String to find it's frequency\n");
    gets(str);
  

    for ( i = 0; str[i] != '\0'; i++)
    {
       hash[str[i]]++;
          
    }
      for ( i = 0;str[i]!='\0'; i++)
      
      printf("%c occur %d times\n",str[i],hash[str[i]]);
    
}
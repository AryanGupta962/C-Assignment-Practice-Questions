#include<stdio.h>
int main()
{ int length=0;
    char str[20];
    printf("Enter a string to finds it's length\n");
   gets(str);
   for(int i=0;str[i]!='\0';i++)
   length++;
   printf("length of Entered String is %d",length);
}
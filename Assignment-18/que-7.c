#include<stdio.h>
#include<string.h>
int palindrome(char str[])
{ int i,j,length;
length=strlen(str);
for(i=0,j=length-1;i<length/2;i++,j--)
{
   if(str[i]!=str[j]){
   printf("String is not palindrome");
   
   return 0;}
}
     printf("String is palindrome");
}
int main()
{
char str[20];
printf("Enter String to check palindrome or not\n");
gets(str);
palindrome(str);

}
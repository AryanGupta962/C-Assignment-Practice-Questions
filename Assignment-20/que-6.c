#include<stdio.h>
int strlenn(char *p)
{   
    int i;
    for( i=0;p[i]!='\0';i++);
    return i;
    
   

}
int main()
{
    char str1[20];
    printf("Enter a String to calculate it's length\n");
    gets(str1);
   
    printf("Length of String is %d",strlenn(str1));
}
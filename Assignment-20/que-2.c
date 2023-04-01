#include<stdio.h>
void swapper(char *p,char *p1)
{   int i;
    char temp[20];
    for( i=0;p[i]!='\0';i++)
    {
        temp[i]=p[i];
    }
    temp[i]='\0';

    for( i=0;p1[i]!='\0';i++)
    {
        p[i]=p1[i];
    }
    p[i]='\0';

    
    for( i=0;temp[i]!='\0';i++)
    {
        p1[i]=temp[i];
    }
    p1[i]='\0';

}
int main()
{
    char str1[20],str2[20];
    printf("Enter first String \n");
    gets(str1);
    printf("Enter Second String\n");
    gets(str2);
    printf("---Here we are calling swapper function to swap our Strings---\n");
    swapper(str1,str2);
    printf("First String is- %s\nSecond String is- %s",str1,str2);
}
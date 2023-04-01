#include<stdio.h>
#include<string.h>
int stringcmp(char str[],char str1[])
{
    int len,len1,i;
    len=strlen(str);
    len1=strlen(str1);
    if(len==len1)
    {
        for(i=0;str[i]!='\0';i++)
        if(str[i]!=str1[i])
        {
            printf("Both String are not equal");
            return 0;
        }
        printf("Both String are equal");

    }
    else printf("Both String are not equal");
}
int main()
{
char str[20],str1[20];
printf("Enter two String to compare both are equal or not\n");
gets(str);
gets(str1);
stringcmp(str,str1);

}
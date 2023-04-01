#include<stdio.h>
#include<string.h>
int main()
{    int counter=0;
    char str[5][20];
    printf("Enter 5 String\n");
    for(int i=0;i<5;i++)
    gets(str[i]);
    for(int i=0;i<5;i++)
    for(int j=0;str[i][j]!='\0';j++)
    if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u')
    counter++;
    printf("Total vowels in all string is %d",counter);
}
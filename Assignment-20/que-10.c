#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]="Helloaryanji",*p;
    p=a;
printf("String in reverse Order\n");
    for(int i=strlen(a)-1;i>=0;i--)
    printf("%c ",p[i]);
    
}
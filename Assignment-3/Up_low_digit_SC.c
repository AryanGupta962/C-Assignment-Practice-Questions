
#include<stdio.h>
int main()
{
    char c;
    printf("Enter Chracter to check it is small case, Upper case , Digit or Special Chracter \n");
    scanf("%c",&c);
    if(c>=65&&c<=90)
        printf("Entered Alphabet is in Uppercase");
else
    if(c>=97&&c<=122)
        printf("Entered Alphabet is in Lowercase");
    else if(c>=48&&c<=57)
        printf("Entered chracter is Number");
        else
            printf("Entered Chracter is Special character");
    return 0;
}

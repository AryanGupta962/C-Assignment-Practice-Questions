#include<stdio.h>
int main()
{
    char c;
    printf("Enter Alphabets to check it is small case or in Upper case\n");
    scanf("%c",&c);
    if(c>=65&&c<=90)
        printf("Entered Alphabet is in Uppercase");
else
    if(c>=97&&c<=122)
        printf("Entered Alphabet is in Lowercase");
    else
        printf("Entered chracter is not a Alphabet");
    return 0;
}

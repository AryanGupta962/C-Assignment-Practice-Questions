#include <stdio.h>
int main()
{
    int alphabets=0,digit=0,s_char=0;
    char str[20];
    printf("Enter a string to calculate Aplhabets Digits and Special Chracter\n");
    gets(str);
  

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]>=65&&str[i]<=97||str[i]>=97&&str[i]<=122)
            alphabets++;
            else if(str[i]>=48&&str[i]<=57)
            digit++;
            else
            s_char++;
    }
    printf("%d alphabets in a string\n%d digits in a string\n%d special chracter in a string",alphabets,digit,s_char);
}
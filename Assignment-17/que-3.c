#include <stdio.h>
int main()
{
    int vowels = 0;
    char str[20], chr;
    printf("Enter a String\n");
    gets(str);
  

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] =='a'||str[i] =='e'||str[i] =='i'||str[i] =='o'||str[i] =='u')
            vowels++;
    }
    printf("%d vowels in a string",vowels);
}
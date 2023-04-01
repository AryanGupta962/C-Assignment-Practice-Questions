#include <stdio.h>
int main()
{
    int occur = 0;
    char str[20], chr;
    printf("Enter a String\n");
    gets(str);
    printf("Enter a chracter to finds it's occurence\n");
    scanf("%c", &chr);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == chr)
            occur++;
    }
    printf("Occurence of %c is %d times", chr, occur);
}
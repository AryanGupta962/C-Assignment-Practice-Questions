#include <stdio.h>
#include <string.h>
int uppercase(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
}
int main()
{
    char str[20];
    printf("Enter String to convert it into uppercase\n");
    gets(str);
    uppercase(str);
    printf("%s", str);
}
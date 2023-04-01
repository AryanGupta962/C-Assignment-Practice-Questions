#include <stdio.h>
#include <string.h>
int alphanumeric(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122 || str[i] >= 48 && str[i] <= 57)
            {

            }
        else
        {
            printf("String is not alphanumeric");
            return 0;
        }
    }
    printf("String is Alphanumeric");
}
int main()
{
    char str[20];
    printf("Enter String to check Alphanumeric or not\n");
    gets(str);
    alphanumeric(str);
}
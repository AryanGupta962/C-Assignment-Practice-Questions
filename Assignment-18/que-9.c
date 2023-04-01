#include <stdio.h>
#include <string.h>
int rev_str(char str[])
{
    int i=0, j, length, k,max;
    char swap;
    length = strlen(str);
    for (i = 0, j = length - 1; i < length / 2; i++, j--)
    {
        swap = str[i];
        str[i] = str[j];
        str[j] = swap;
    }
    j=0;


    for (i = 0;str[i]!='\0'; i++){

        if (str[i] == 32){

          max=j+((i-j)/2);
            for (k = i - 1; j < max; j++, k--)
            {
                swap = str[j];
                str[j] = str[k];
                str[k] = swap;
            }

            j=i+1;

        }
   }
   if(str[i]=='\0')
   {
     max=j+((i-j)/2);

            for (k = i - 1; j < max; j++, k--)
            {
                swap = str[j];
                str[j] = str[k];
                str[k] = swap;
            }

   }

}
int main()
{
    char str[20];
    printf("Enter String to reverse wordwise\n");
    gets(str);
    rev_str(str);
    printf("%s", str);
}

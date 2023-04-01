#include<stdio.h>
int main()
{
 char *p;
 printf("Enter a string\n");
 p=(char*)malloc(20*sizeof(char));
fgets(p,20,stdin);

printf("Entered String is\n%s",p);
free(p);

}

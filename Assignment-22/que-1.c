#include<stdio.h>
char* String_input()
{
    int i,len=1;
    char *p,*q,ch;
    p=(char*)malloc(len);
    ch=getche();
    p[0]=ch;

  while(ch!=13)
   {
   q=(char*)malloc(len+1);
   for(i=0;i<len;i++)
    q[i]=p[i];
   free(p);
   len++;
   p=(char*)malloc(len);
   for(i=0;i<len;i++)
    p[i]=q[i];
   free(q);
   ch=getche();
   p[len-1]=ch;

  }

   p[len-1]='\0';


return p;
}
int main()
{
char *str;
str=String_input();
printf("Entered String is\n%s\n",str);
}
//realloc

#include<stdio.h>
char* String_input()
{
    int i,len=1;
    char *p,ch;
    p=(char*)malloc(len);
    ch=getche();
    p[0]=ch;
  while(ch!=13)
   {
    ch=getche();
   len++;
    p=(char*)realloc(p,len*sizeof(int));
  p[len-1]=ch;

  }
  len++;
    p=(char*)realloc(p,len*sizeof(int));
   p[len-1]='\0';


return p;
}
int main()
{
char *str;
str=String_input();
printf("Entered String is\n%s\n",str);
}

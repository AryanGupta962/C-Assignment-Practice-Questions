#include<stdio.h>
int main()
{char a=65;
  for(int i=0;i<=12;i++)
{a=65;
    for(int j=0;j<=12;j++){
        if(j<=6-i){
        printf("%c",a++);
        //if(j==6-i)
          //  a=a-1;
          if(j==6)
            a=a-1;
        }else
    if(j>=6+i)
    {

       printf("%c",--a);
    }else printf(" ");
    }
printf("\n");
}
    return 0;
}

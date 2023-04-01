#include<stdio.h>
int main()
{
    char A='65';
  for(int i=0;i<=4;i++)
{A='A';
    for(int j=0;j<=4+i;j++){
        if(j<4-i)
        printf(" ");
    else if(j>4)
{if(j==5)
    A=A-1;
  printf("%c",--A);
} else
        printf("%c",A++);

}
printf("\n");

}
    return 0;
}

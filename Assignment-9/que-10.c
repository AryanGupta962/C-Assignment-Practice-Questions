#include<stdio.h>
int main()
{
    int a,b,c,dis=0;
    printf("Enter value of a,b and c to find root of quardatic equation\n");
    scanf("%d%d%d",&a,&b,&c);
    dis=(b*b)-(4*a*c);
    switch(dis>0)
    {
    case 1:
     printf("roots are positive");
     break;
     case 0:
     switch(dis==0)
     {
     case 1:
      printf("roots are equal");
     case 0:
      printf("roots are imaginary");
     }

    }
    return 0;
}

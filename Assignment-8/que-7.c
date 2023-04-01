
  #include<stdio.h>
int main()
{

  for(int i=0;i<=4;i++)
{
    for(int j=0;j<=9;j++){
        if(j<=4-i)
       printf("*");
       else printf(" ");
       if(j==4){
    for(int k=0;k<=4;k++)
        if(k<i)
        printf(" ");
    else printf("*");
       }


    }
printf("\n");
}
    return 0;
}

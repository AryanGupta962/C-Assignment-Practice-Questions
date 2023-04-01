#include<stdio.h>
int main()
{
    for(int i=0,k=0;i<=3;i++)
{
    for(int j=0;j<=6;j++){
            if(i==0)
            {
                if(j<=3-i)
            printf("%d",++k);

            else{if(j>=3+i){

            printf("%d",--k);}
        else printf(" ");}

            } else
        if(j<=3-i)
            printf("%d",++k);

            else{if(j>=3+i){

            printf("%d",k--);}
        else printf(" ");}
    }

     printf("\n");
k=0;
}

    return 0;
}

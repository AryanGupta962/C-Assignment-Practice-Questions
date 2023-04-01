#include<stdio.h>
int main()
{
    int n,n1;
    printf("Enter two number\n");
    scanf("%d%d",&n,&n1);
for(int i=n+1;i<n1;i++)
{
    for(int j=2;j<i;j++){
    if(i%j==0){
     break;}
     else
        if((j+1)==i)
     printf("%d ",i);
    }
}

}


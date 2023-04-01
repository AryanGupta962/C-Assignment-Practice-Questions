#include<stdio.h>
int main()
{
    int n,i,j;
    printf("all prime Number up to 100 is\n");
for(i=3;i<100;i++)
{
    for(j=2;j<i;j++){
    if(i%j==0){
     break;} else if(j==(i-1))
     printf("%d ",i);
    }
}

}


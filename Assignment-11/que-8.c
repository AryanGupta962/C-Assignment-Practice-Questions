#include<stdio.h>
/*void fun()
{
 for(int i=0;i<=5;i++){
   for(int j=0;j<=5+i;j++)
 {
    if(j<5-i)
      printf(" ");
    else
     if(i==0)
     printf("*");
     else
    if(i%2!=0){
     if(j%2==0)
     printf("*");
    else
     printf(" ");
    }else if(i%2==0)
    if(j%2!=0)
    printf("*");
    else printf(" ");


 }
 printf("\n");
 }
}*/
int fact(int n)
{ int temp=1;
 while(n>0)
 {
  temp=temp*n;
n--;
 }
 return temp;
}
int combi(int n,int r)
{
 return fact(n)/(fact(n-r)*fact(r));

}
void fun()
{
 int k=0,r;
 for(int i=1;i<=6;i++){
   k=0;
   r=0;
   for(int j=1;j<=6+i;j++)
 {
    if(j<=6-i){
      printf("  ");
    k=0;
    }
    else
     if(k==0){
     printf("%2d",combi(i-1,r));
     k++;
     r++;
     }
 else {
  printf("  ");
  k=0;
 }

 }
 printf("\n");
 }
}

int main()
{
 fun();

    return 0;
}

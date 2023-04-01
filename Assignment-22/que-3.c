#include<stdio.h>
int main()
{
 int *p,n,sum=0;
 printf("Enter a number how many numbers you want to sum\n");
 scanf("%d",&n);
 p=(int*)malloc(n*sizeof(int));
 printf("Enter %d numbers which you want to sum\n",n);
 for(int i=0;i<n;i++){
  scanf("%d",&p[i]);
  sum+=p[i];
 }
printf("Sum of all number is %d",sum);
free(p);

}

#include<stdio.h>
int main()
{
 int n,*p,avg;
 printf("Enter a size of an array you want to make\n");
 scanf("%d",&n);
 p=(int*)malloc(n*sizeof(int));
 printf("Enter %d numbers\n",n);
 for(int i=0;i<n;i++)
 {
  scanf("%d",&p[i]);
 }
 printf("Entered value is\n");
 for(int i=0;i<n;i++)
 {
  printf("%d\n",p[i]);
  avg+=p[i];
 }
 avg/=n;
 printf("Average is %d",avg);
 return 0;
}

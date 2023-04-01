#include<stdio.h>
int main()
{
 int *p,n,gtr=0;
 printf("Enter a number how much element you want to store in array.\n");
 scanf("%d",&n);
 p=(int*)malloc(n*sizeof(int));
printf("Enter %d Elements\n",n);
 for(int i=0;i<n;i++){
     scanf("%d",&p[i]);
  if(gtr<p[i])
  gtr=p[i];
 }
printf("Greater number is %d",gtr);
free(p);

}

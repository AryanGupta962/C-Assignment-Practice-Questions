#include<stdio.h>
int* fun()
{
 int *a;
 a=(int*)malloc(4);
 free(a);
 return a;

}
int main()
{
 int *p;
 p=fun();
 *p=6;
 printf("Value is %d",*p);

}

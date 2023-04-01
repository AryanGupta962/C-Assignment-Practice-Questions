#include<stdio.h>
int fun()
{
 int *p;
 p=(int*)malloc(4);//here memory leak occur

 p=(int*)malloc(4);
 *p=9;
printf("%d",*p);
free(p);
}
int main()
{
fun();




}

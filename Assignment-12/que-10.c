#include<math.h>
int fun(int n)
{
 static int d,p,o;
d=n%10;
o=o+(d*pow(8,p));
n=n/10;
p++;
if(n==0){
 printf("%d ",o);
 return o;
 }
   if(n!=0)
    fun(n);

}

void binary(int n)
{
  if(n>1)
  binary(n/2);
   if(n%2==0)
  printf("0");
 else printf("1");

}
int main()
{
    int n;
 printf("Enter a number to print binary of a given octal number");
 scanf("%d",&n);

 binary(fun(n));

}

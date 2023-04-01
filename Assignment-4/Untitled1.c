int fun(int n)
{
    int static i=2;
    printf("%d ",i);
     i=i+2;
     if(n==1){
     return i;

     }
     if(n>1)
        fun(n-1);

 printf("A");
}
int main()
{
   int n,s;
 printf("Enter a number to print even number ");
 scanf("%d",&n);

 printf("%d",fun(n));
}

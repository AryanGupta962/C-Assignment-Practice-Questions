void fun(int n)
{
    int static i=2;
    printf("%d ",i);
     i=i+2;
     if(n>1)
        fun(n-1);


}
int main()
{
   int n;
 printf("Enter a number to print even number ");
 scanf("%d",&n);
 fun(n);
}

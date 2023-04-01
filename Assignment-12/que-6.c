void fun(int n)
{
    int static i=2;
     i=i+2;
     if(n>1)
        fun(n-1);
        i=i-2;
         printf("%d ",i);


}
int main()
{
int n;
 printf("Enter a number to print even number in reverse order ");
 scanf("%d",&n);
 fun(n);
}

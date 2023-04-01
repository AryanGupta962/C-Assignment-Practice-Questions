void fun(int n)
{
     if(n>1)
        fun(n-1);

         printf("%d ",n*n);


}
int main()
{int n;
 printf("Enter a number to print square of n natural number ");
 scanf("%d",&n);
 fun(n);

}

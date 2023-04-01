void fun(int n)
{
    if(n>1)
        fun(n/2);
    if(n%2==0)
        printf("0");
    else
        printf("1");

}
int main()
{
    int n;
 printf("Enter a number to print binary of a given number");
 scanf("%d",&n);
 fun(n);

}
